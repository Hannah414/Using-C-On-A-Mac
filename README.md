# Using C on a Mac

C was created in the early 1970’s in Bell Labs by Dennis Richie. 
C was created in an effort to take advantage of PDP-11 features and improve upon the slowness of B, 
which was a modification of the BCPL created by Ken Thompson. 

C is a multipurpose programming language. 
A few examples of uses for C are databases, operating systems, kernels, 
and use as compilers/interpreters for other languages like perl or python. 

## Getting Started with C

### Resources

A few helpful resources for learning C are [w3schools](https://www.w3schools.com/c/index.php) and 
[programiz](https://www.programiz.com/c-programming/c-recursion).

### Downloading C for Mac

We will be using Visual Studio Code, you can download VScode [here.](https://code.visualstudio.com/download)

Once you have finished downloading and installing VScode onto your computeropen the application and click on *extensions* located in the lefthand bar. The symbol for it is 4 squares.

Once the *extensions* screen has popped out, use the search bar at the top of newly opened
screen and enter *C*.

The first result from your search should have a header of *C/C++* click on this hit install. 

After that has finished installing, you should go back to the search and also install the *C/C++ Extension Pack*. 

### Installing a Compiller for Mac

Mac has a compiller that is already availible for use called *Clang*. To use clang you will need to open up *Terminal*. Once *Terminal* is open enter and run the line **xcode-select --install**. When a pop-up window appears, hit **install**. Another pop-up window with the Terms and Conditions will appear, click on **agree**. Wait for Clang to finish installing. You can find more indepth instructions [here.](https://www.ics.uci.edu/~pattis/common/handouts/macclion/clang.html)

## C Basics

In this section we will cover how to use some basic commands in C.

This will include basic Syntax, Functions, Printing, and Commenting.

### Basic Syntax

At the begining of most C programs you will need you include the line **#include <stdio.h>** this line is a header file library that allows us to use input and output statments. 

### Functions

Any code that you want to be executed must be a part of a function. To create a function you must start with the following code:

data-type(main){statments}

This is an example of a basic function in C. Data-type refers to the type of data that will be returned by the function (will will look at this more later). In the example, we have named our function *main*, but you could name it however you want as long as you start with a letter or underscore and only include letters, numbers, or underscores. (Please note that there is a 31 character limit)

Any statment that you want to run must be placed within the curly brackets of a function.

### Printing

The command for print in C is as follows: *printf(" ");*

Whatever output you wish to print must be within parentheses and quotes. Format specifiers are used in C for input and output purposes. They allow the compiler to understand what the data-type of a variable is during input and output functions. [Here](https://www.tutorialspoint.com/format-specifiers-in-c) is a list of format specifiers. The example below shows the use of sepcifier *%d*:

https://github.com/Hannah414/CS330PLP/blob/925ad5c3f92184bedbaa039fa8c9a759d6973ce3/Example.c#L1-L8

Another thing to note is that each statement must end with a semi-colon to end the statment and seperate it from following statments. 

### Commenting

To comment in C, you need to preface the text with a double slash like so: // comment. 

If you want to comment out a large block of code all at once you would brackett the entierty of the code as follows: /* code */. 

## Hello World 

Now that we have looked at some of the basic commands of C, let us create our first program!

We will be creating a Hello World program. (See Program_1) We will need to create a function that outputs the phrase "Hello World!". 

First we will need **#include <stdio.h>** in order to have an output. 

Next, we will need to create a function so that C will execute our code. **int main() { }**

Then , within the curly brackets of the function, we will insert our print command: **printf("Hello World!")** and set our return to 0. (We will go over *return* later, when we discuss functions)

https://github.com/Hannah414/CS330PLP/blob/222df64bc59fb0dfeca609d9b97aa7fdb984ef6b/Program_1.c#L1-L16

Congratulations! You have completed your first program in C!

## Data Types 

In C, data types are declarations for variables that determines the type and size of the data we associate with each variables. C is a strongly (explicitly) typed language, therefor every variable used in C must be declared before it can be used. (This makes C a static typed language, where the variables are declared within the code, and the program knows what each variable type is before execution.)

We will be going over ints, chars, floats, arrays, booleans, and voids. See Program_2 for examples.

### ints

*int* variables are whole numbers that can have both zero, negative, or positive values. These variables are declared when you write *int* before the variable. 

https://github.com/Hannah414/CS330PLP/blob/222df64bc59fb0dfeca609d9b97aa7fdb984ef6b/Program_2.c#L9-L13

### floats

*float* is used to hold real numbers, these numbers can be positive, negative, rational or irrational. You can also use *double* the same way as a float for longer, more accurate numbers. These variables are declared when you write *float* (or *double*) before the variable. 

When adding an *int* with a *float* C will automatically convert the *int* into a *float* in order to complete the equation. The resulting output will be a float. 

https://github.com/Hannah414/CS330PLP/blob/222df64bc59fb0dfeca609d9b97aa7fdb984ef6b/Program_2.c#L14-L19

### chars

*char* is used to declare character type variables, you can use any character contained withing quotes or apostrophes. These variables are declared when you write *char* before the variable. 

https://github.com/Hannah414/CS330PLP/blob/222df64bc59fb0dfeca609d9b97aa7fdb984ef6b/Program_2.c#L20-L25

### arrays

*arrays* are variables that can store multiple values of the same type in one variable instead of multiple. *arrays* must be declared, and are created when square brackets are places diractly following the variable name and are set equal to it values which are contained in curly brackets and seperated by commas. For example: **int var[] = {1,2,3}**

https://github.com/Hannah414/CS330PLP/blob/222df64bc59fb0dfeca609d9b97aa7fdb984ef6b/Program_2.c#L26-L31

### booleans

*bool* is a variable type that returnes **True** if a variable is greater then 0 and **False** if the variable equals 0. 

Note: To use *bool* you need to include the following header: **#include <stdbool.h>** and the variable must have *bool* before it, this is because bool is not a built in operation in c. 

https://github.com/Hannah414/CS330PLP/blob/222df64bc59fb0dfeca609d9b97aa7fdb984ef6b/Program_2.c#L32-L37

### voids

*void* is an incomplete data type. a *void* data type means "nothing" and can be considered **absent**, if a function returns nothing then the data type returned should be *void*. 

### pointers

A *pointer* is a variable that points to the storage/memory address of another variable. To create a pointer you first declare its data type, then you place an asterisk between the data type and the variable name. For example: **int * pointer;**. To get the address of the variable we are pointing to, we must set the pointer equal to the variable we want to point at with an & symbol in front of the variable name. Example: **pointer = &variable;**

https://github.com/Hannah414/CS330PLP/blob/222df64bc59fb0dfeca609d9b97aa7fdb984ef6b/Program_2.c#L42-L49

## Naming Conventions

There are both hard and soft rules for naming your variables. Some rules are set within the C program, and others are general rules that coders follow because of tradition. 

### Hard Rules

Variables can contain letters, digits and underscores and must begin with a letter or an underscore. Variables are case sensitive (For example: myVar and myvar are different variables). Variables cannot contain whitespaces or special characters and reserved words (such as *int*) cannot be used. 

### Soft Rules

While it is possible for you to start a variable name with an underscore or number, most programmers will not. If you are working software that is going to be shared, edited, or reveiwed by others it is advised you don't start the variable name with an underscore. 

On the same note, variables should not be started with an uppercase letter unless it is a *class* name (we will get to those later).

## Reserved Words

Reserved words are words that are built into programing languages. They are used to execute built in operations automaticaly. Like we discussed above, data types must be declared when creating variables, this is an exaple of using reserved words. *int*, *float*, *char*, etc.. are used to automatically declare the limitaions and rules of the variable(s) created. Other reserved words can be found [here](https://www.ibm.com/docs/en/developer-for-zos/14.2?topic=programs-c-reserved-keywords).

## Operators in C

Some of the basic operators avalible in c are the following:

![table of basic operators in c](https://learningmonkey.in/wp-content/uploads/2021/06/Operator-Precedence-and-Associativity-in-C.jpg)

You can find examples of how to use these operators in Program_3. 

## Conditional Statements

### Logical Conditionals

Logical conditionals use rational operators, and are generally self explainatory:

![table of rational operators](https://www.programtopia.net/wp-content/uploads/2021/01/2.PNG)

### if/else Statements

 - *if*: to specify a block of code to be executed, if the condition is true
 - *else if*: to specify a block of code to be executed, if first condition is false
 - *else*: to specify a block of code to be executed, if condition is false\
 
![example of if/else if/else statments](https://www.programiz.com/sites/tutorial2program/files/cpp-if-else-if-else-working.png)

For if/else statements, if two conditions must be met, you can include both conditionals in the same *if* statement. You would place both conditionals within the parentheses seperated by an *and*. if the first condition is not met, C will not even check the second condition, this is called short-circuiting. 

Note: You must surround the code to be executed with brackets {}. 

### switch statements

- *switch*: to specify many alternate blocks of code to be executed

https://github.com/Hannah414/CS330PLP/blob/21b4ed941f2814e3d2e37cb18efe2f5d48994c2a/Program_4.c#L22-L37

For switch statments, the conditional must match the case exactly in order for the bracketed code to be executed. Once a condition is met, and the associated code has run, you use *break* to exit the switch statement. 

Note: Like with if/else statements you must surround the code to be executed with brackets {}. 

See Program_4 for examples of conditional statements. 

## Loops

C has three different tyoes of loops:

- *for* loops
- *while* loops 
- *do while* loops 

### for loops

https://github.com/Hannah414/CS330PLP/blob/6505c970f1e93b53b14f76a2646fe2ee5b597af6/Program_5.c#L8-L17

### while loops

https://github.com/Hannah414/CS330PLP/blob/6505c970f1e93b53b14f76a2646fe2ee5b597af6/Program_5.c#L19-L26

### do while loops 

https://github.com/Hannah414/CS330PLP/blob/6505c970f1e93b53b14f76a2646fe2ee5b597af6/Program_5.c#L28-L36

See Program_5 for examples of loops. 

## Functions 

When creating a function, you must declare the return type of the function. This could be *int*, *float*, *char*, or *void*. after delairng the function type, you would name it. Programers generally name their functions based on the functions purpose. The pattern for creating a function is **data-type functionName(){}** Functions are used to help break up code into managable sections that perform a specific task. This allows programmers to call a function to perform its task instead of writing the code for said task repeatedly as needed. Note: functions in C can only return one value each time it's called. C functions pass by value, that is, they pass a copy of a variable into a function when it's called for use within the function. 

C  supports recursive functions, i.e., a function to call itself. But while using recursion, you must define an exit condition from the function, otherwise it will go into an infinite loop. Recursive functions are useful in solving mathematical equations. See more on functions in Program_6.

## Structs 

C is an Procedural Oriented language. Objects in C are defined as *structs*, similar to arrays, *structs* are variables that hold multiple values. Though unlike arrays, *structs* are capable of holding multiple different data types. 

Structs are created using **struct Variable { dataType subVariable;  } OptionalShortHandVariable;**

https://github.com/Hannah414/CS330PLP/blob/17148a416a4808ffc69e5cbc35e55fa5c216d91d/Program_7.c#L6-L12

See more on structs in Program_7.













