Intro to C
==========

> "A C program is like a fast dance on a newly waxed dance floor by people carrying razors."
> --- Waldi Ravens.

So you want to learn C? Congratulations, you 

A few notes before we get started
---------------------------------

Most of my instructions assume a Unix or Unix-like operating system. If you're on Windows, you will need Cygwin or something similar. Unfortunately, I don't know a great deal about Cygwin, but if you can't figure out how to do something, we can try to puzzle through it together.

The names of command-line programs, programming language statements, and source code blocks are written in `this font`. The dollar sign character (`$`) is a convention for the command prompt. A phrase in the code font beginning with a dollar sign means 'type this at the command line'. You don't type the dollar sign character; it stands in for whatever your prompt says.

Since we're hosting all of the code and assignments on GitHub, you will want to have a decent working knowledge of Git. If you need to brush up on Git basics, GitHub has a pretty good [interactive tutorial](https://try.github.io/levels/1/challenges/1) you may want to run through.

How do I compile C programs?
--------------------------

In order to learn how to program in C, you're going to need to know how to compile and run C programs. Fortunately, it isn't terribly hard. 

First, you're going to need a C compiler. The most common C compiler these days is the GNU C Compiler, or `gcc`. On most Unix distributions (and Cygwin), `gcc` should be preinstalled. To check if it's there, you can just use `$ which gcc` - if it prints out a path (probably `/usr/bin/gcc`), then `gcc` is installed on your system. 

Macs nowdays ship with the `clang` C compiler instead, which is (in my opinion) frankly a better compiler –-- on the Mac, `gcc` is just a symlink to `clang`. `clang` has a few advantages over `gcc`, but the main one that's going to matter to you right now is that I think the compiler syntax error messages are a little easier to understand. Either C compiler is just fine, but if you do want to install `clang`, you should be able to install using your package manager of choice.

You're also going to need a text editor. Any programmer's text editor worth its salt should have C support right out of the box. Use whatever you're most familiar with.

C source code files have (by convention) the filename extension `.c`. To compile a C source code file, type `$ gcc <FILE>.c`, where `<FILE>` is the name of the source code file.  You can run those compiled binary files by saying `$ ./a.out`.

By default, the compiler will output your executable to a file in the same directory called `a.out`. If you don't want your binary to be called `a.out`, you can use the `-o` option to change the name of the output file. For example, `$ gcc program.c -o program` will compile the source code file `program.c` and output the compiled binary to a file called `program`.

Now that you know how to compile a C program, it's time to try [writing one](https://github.com/NerdyBookClub/intro-to-c/blob/master/assignment1/Assignment%201.md).
