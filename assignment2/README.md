Variables and Arithmetic
========================

In C, values such as numbers, strings, and characters may be stored in _variables_. A variable is declared by stating the type and the name of the variable. For example:
```c
int a;   // declares an integer  named 'a'
float b; // declares a floating-point number named 'b'
```
Multiple variables may be declared on in the same statement. For example:

```c
int a, b; // declares two separate integer variables named 'a' and 'b'
```

Once a variable has been declared, we can assign values to it using the `=` operator. If we wanted to set the value of the variable `a` to ten, we could write:

```c
int a;   // declare the variable 'a'
a = 10; // set the value of 'a' to 10
```

We can perform arithmetic, such as multiplication, addition, and subtraction, on numeric variables, and assign the results of these operations to numeric variables. For example:
```c
int a, b, c; // declares two separate integer variables named 'a' and 'b'

a = 5;       // sets the value of 'a' to 5
b = 10;      // sets the value of 'b' to 10

c = a + b;   // sets the value of 'c' to 15 (5 + 10).
```
Constants may also be used in arithmetic expressions. For example:

```c
int a, b;

a = 5 * 10; // sets the value of 'a' to 50 (5 * 10)

b = a - 20; // sets the value of 'b' to 30 (50 - 20).
            // the value of 'a' remains the same

```

C Primitive Data Types
----------------------

Now is probably a good time to discuss briefly some of the primitive data types available in C. The exact size of many of these types depends on your computer's system architecture and on the C compiler you're using.

 + `int`: Signed integer, typically 16 or 32 bits
 + `float`: Floating-point number, typically 32 bits
 + `double`: Double-precision floating-point number
 + `short`: Short integer, usually a power of 2 fewer bits than an `int`
 + `long`: Long integer, usually a power of 2 more bits than an `int`
 + `char`: ASCII character, always a single byte.

 Note that C has no primitive string type. Typically, strings are represented as arrays of `char`s.

Now You Try
-----------

Try writing a program that:
 + Converts a temperature in Fahrenheit to a temperature in Celcius (using the formula C = (5/9)(F - 32) )
 + Finds what percentage one number is of another number.
 + Performs any other simple algebra.
