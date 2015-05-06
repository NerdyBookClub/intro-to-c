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
