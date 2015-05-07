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

Once again, just like in Java, the body of a function is inclused between curly braces (`{` and `}`). The same is true of other types of blocks, such as `for` and `while` loops or `if` statements.

The `#include <stdio.h>` at the top of the file is not dissimilar to the `import` statements you may also remember from Java. Technically, `#include` is a _preprocessor directive_, rather than a C statement, but we'll talk more about the C preprocessor later. For now, this statement is telling C to use some functions defined in a file called `stdio.h`. In this case, the `puts` function, which prints a string to the console, comes from `stdio` (which stands for 'standard input and output'.
