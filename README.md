Intro to C
==========

> "A C program is like a fast dance on a newly waxed dance floor by people carrying razors."
> &mdash; Waldi Ravens.

So you want to learn C? Congratulations, you're about to journey through one of the simultaneously most beloved and most hated programming languages. C is a challenging language to master – an old adage suggests that it is easy to "shoot one's self in the foot" in C – but it offers a great deal of rewards in the form of speed and efficiency. C is the _lingua franca_ of low-level systems programming, as it allows nearly direct access to the machine; some have called it 'high-level assembly'. Also, C is an important piece of the history of computer programming: the Unix operating system was implemented almost exclusively in C, and many other languages have drawn a great deal of influence from C's design and syntax.

A few notes before we get started
---------------------------------

This set of tutorials assumes some amount of prior of experience with basic computer programming. It focuses primarily on teaching C, rather than on teaching programming in general. It shouldn't require a high level of knowledge or experience; but it is not a sufficient introduction to programming in general.

Most of my instructions assume a Unix or Unix-like operating system. If you're on Windows, you will need Cygwin or something similar. Unfortunately, I don't know a great deal about Cygwin, but if you can't figure out how to do something, we can try to puzzle through it together.

The names of command-line programs, programming language statements, and source code blocks are written in `this font`. The dollar sign character (`$`) is a convention for the command prompt. A phrase in the code font beginning with a dollar sign means 'type this at the command line'. You don't type the dollar sign character; it stands in for whatever your prompt says.

Since we're hosting all of the code and assignments on GitHub, you will want to have a decent working knowledge of Git. If you need to brush up on Git basics, GitHub has a pretty good [interactive tutorial](https://try.github.io/levels/1/challenges/1) you may want to run through.

How do I compile C programs?
--------------------------

In order to learn how to program in C, you're going to need to know how to compile and run C programs. Fortunately, it isn't terribly hard.

First, you're going to need a C compiler. The most common C compiler these days is the GNU C Compiler, or `gcc`. On most Unix distributions (and Cygwin), `gcc` should be preinstalled. To check if it's there, you can just use `$ which gcc` - if it prints out a path (probably `/usr/bin/gcc`), then `gcc` is installed on your system.

Macs nowdays ship with the `clang` C compiler instead, which is (in my opinion) frankly a better compiler &mdash; on the Mac, `gcc` is just a symlink to `clang`. `clang` has a few advantages over `gcc`, but the main one that's going to matter to you right now is that I think the compiler syntax error messages are a little easier to understand. Either C compiler is just fine, but if you do want to install `clang`, you should be able to install using your package manager of choice.

You're also going to need a text editor. Any programmer's text editor worth its salt should have C support right out of the box. Use whatever you're most familiar with.

C source code files have (by convention) the filename extension `.c`. To compile a C source code file, type `$ gcc <FILE>.c`, where `<FILE>` is the name of the source code file.  You can run those compiled binary files by saying `$ ./a.out`.

By default, the compiler will output your executable to a file in the same directory called `a.out`. If you don't want your binary to be called `a.out`, you can use the `-o` option to change the name of the output file. For example, `$ gcc program.c -o program` will compile the source code file `program.c` and output the compiled binary to a file called `program`.

Now that you know how to compile a C program, it's time to try [writing one](https://github.com/NerdyBookClub/intro-to-c/blob/master/assignment1/Assignment%201.md).

What do I do with my code?
--------------------------

If you'd like to get my advice or feedback on your attempts to complete any of the 'assignments' given here, try [forking](https://help.github.com/articles/fork-a-repo/) this repository and commiting your code to your fork. Put the code for each assignment in that assignment's directory. Don't feel like you have to do this; it's not like I'm grading you or anything. Also, don't feel like you have to complete all of the tasks in each assignment, this is just for fun.

Other Resources
---------------

Since C has been around for so long and is still very popular, there are a great deal of excellent resources that I'd be amiss not to mention. After you've completed the introductory material here, you should have a basic working knowledge of C, but like many of the best activities in life, programming in C is simple to learn but difficult to master. A good programmer knows a lot about their languages of choice, but a great programmer is one who never stops learning more. Once you've completed most or all of this tutorial, you might want to move on to some more advanced courses, such as the following.

+ [Learn C the Hard Way](http://c.learncodethehardway.org/book/) is a great C tutorial which, like this one, teaches you the C programming language over a series of assignments. Like the rest of the popular "Learn $LANGUAGE the Hard Way" tutorials, this tutorial is fairly challenging – it's intended for people with experience in other languages. It might be a little too tough for beginner programmers to complete right away, but after you finish this set of tutorials, you might want to check it out, and you'll probably be able to breeze through some of the earlier assignments.
+ [Build Your Own LISP](http://www.buildyourownlisp.com/) is a set of tutorials that teach you about programming in C over the course of a series of projects, where you implement an interpreter for the LISP programming language. Once again, it's intended for people with some prior programming experience who want to learn more about C and LISP. If you're interested in how programming languages are implemented, or you like and/or want to learn more about LISP, this might be a fun tutorial to try when you've done some of the introductory stuff in this repo.
+ [_The C Programming Language_](http://www.amazon.com/The-Programming-Language-Brian-Kernighan/dp/0131103628) by Brian W. Kernighan and Dennis M. Ritchie. Also known as 'K&R' after its authors last names, this is the canonical book about programming in C. Dennis Ritchie and Ken Thompson were the original developers of C (and the Unix operating system), so by reading this book, you'd be learning C straight from the metaphorical horse's mouth. K&R is both an introductory tutorial to C and a reference on its syntax and semantics. Unlike many books that provide complete reference material on a programming language, K&R is only 272 pages – a great illustration of C's simplicity. To quote the authors, "C is not a big language, and it is not served well by a big book."

  Paperback copies of K&R are pretty cheap, especially because it was originally printed in 1988 and there are a lot of used compies on the market. With a little hunting, I'm sure one can easily find PDFs online, as well. It's an excellent reference book that every serious C programmer ought to own.
