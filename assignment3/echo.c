/********************************************************************\
 * echo.c                                                           *
 * 																	*
 * A simple program that reads a word from the console and prints   *
 * it back out again.                                               *
\********************************************************************/

#include <stdio.h>

#define WORD_LENGTH 25 // maximum size for the word array

int main() {

    char phrase[WORD_LENGTH]; // an array of 25 characters

    // we use `scanf` to read up to 24 characters from the console
    // and store them in the array `phrase`.
    //
    // we read in one fewer character than the length of the array
    // because the string produced by `scanf` is null-terminated.
    if (scanf("%24s", phrase) == 1) {
        // `scanf` returns 1 if the string was read successfully,
        puts(phrase); // so we print the string...
        return 0;     // exit and then exit normally.
    } else {  // if `scanf` doesn't return 1, something went wrong...
        return 1;  // ...so we exit with an error.
    }

}
