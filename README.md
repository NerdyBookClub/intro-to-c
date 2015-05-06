Intro to C
==========

> "A C program is like a fast dance on a newly waxed dance floor by people carrying razors."
> --- Waldi Ravens.

So you want to learn C? Congratulations, you 

How do I write C programs?
--------------------------

In order to learn how to program in C, you're going to need to know how to compile and run C programs. Fortunately, it isn't terribly hard. 

First, you're going to need a C compiler. The most common C compiler these days is the GNU C Compiler, or `gcc`. On most Unix distributions (and Cygwin), `gcc` should be preinstalled. To check if it's there, you can just use `$ which gcc` - if it prints out a path (probably `/usr/bin/gcc`), then `gcc` is installed on your system. 

Macs nowdays ship with the `clang` C compiler instead, which is (in my opinion) frankly a better compiler –-- on the Mac, `gcc` is just a symlink to `clang`. `clang` has a few advantages over `gcc`, but the main one that's going to matter to you right now is that I think the compiler syntax error messages are a little easier to understand. Either C compiler is just fine, but if you do want to install `clang`, you should be able to install using your package manager of choice.

You're also going to need a text editor. Any programmer's text editor worth its salt should have C support right out of the box. Use whatever you're most familiar with.
