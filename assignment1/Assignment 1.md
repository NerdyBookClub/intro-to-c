Saying Hello
-------------

Now that you know how to compile C programs, let's try our hand at writing a simple C program. The prototypical first program you learn in any programming language is the 'hello world' program, which prints the string `"Hello world."` to the console. In C, it looks something like this:

```c
#include <stdio.h>

int main (int argc, char *argv[]){
  puts("Hello world.");
  return 0;
}
```

The source code for this program can be found in the file `hello.c` if you want to compile it or mess around with it some.

Let's take a moment here to talk about C syntax. Since you guys have some experience programming in Java, the basic elements of C syntax should seem pretty familiar to you (this is because Java syntax was inspired directly by C). 

You'll notice that, just like in Java, a C function declaration consists of a return type followed by a name followed by a list of arguments, surrounded by perentheses. For example, `int main (int argc, char *argv[])` declares `main` as a function which returns an `int` and takes as arguments an `int` and a `char *`, a _pointer_ to an array of characters. We'll talk more about pointers later. For now, just know that `char *argv[]` is basically a string.
