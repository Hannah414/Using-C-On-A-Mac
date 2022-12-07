# CS-330 PLP C on Mac

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

Whatever output you wish to print must be withing the parentheses and quotes. 

Another thing to note is that each statment must end with a semi-colon to both end the statment and to seperate it from following statments. 

### Commenting

To comment in C, you need to preface the text with a double slash like so: // comment. 

If you want to comment out a large block of code all at once you would brackett the entierty of the code as follows: /* code */. 

## Hello World 

Now that we have looked at some of the basic commands of C, let us create our first program!

We will be creating a Hello World program. (See Program_1) We will need to create a function that outputs the phrase "Hello World!". 

First we will need **#include <stdio.h>** in order to have an output. 

Next, we will need to create a function so that C will execute our code. **int main() { }**

Then , within the curly brackets of the function, we will insert our print command: **printf("Hello World!")** and set our return to 0. (We will go over *return* later, when we discuss functions)

![Example of C code for Hello World](https://i.pinimg.com/564x/a0/20/0d/a0200d8de9b8046270ab92af9ef47b6f.jpg)

Congratulations! You have completed your first program in C!

## Data Types 

In C, data types are declarations for variables that determines the type and size of the data we associate with each variables. C is a strongly (explicitly) typed language, therefor every variable used in C must be declared before it can be used. (This makes C a static typed language, where the variables are declared within the code, and the program knows what each variable type is before execution.)

We will be going over ints, chars, floats, arrays, booleans, and voids. See Program_2 for examples.

### ints

*int* variables are whole numbers that can have both zero, negative, or positive values. These variables are declared when you write *int* before the variable. 

### floats

*float* is used to hold real numbers, these numbers can be positive, negative, rational or irrational. You can also use *double* the same way as a float for longer, more accurate numbers. These variables are declared when you write *float* (or *double*) before the variable. 

When adding an *int* with a *float* C will automatically convert the *int* into a *float* in order to complete the equation. The resulting output will be a float. 

### chars

*char* is used to declare character type variables, you can use any character contained withing quotes or apostrophes. These variables are declared when you write *char* before the variable. 

### arrays

*arrays* are variables that can store multiple values of the same type in one variable instead of multiple. *arrays* must be declared, and are created when square brackets are places diractly following the variable name and are set equal to it values which are contained in curly brackets and seperated by commas. For example: **int var[] = {1,2,3}**

### booleans

*bool* is a variable type that returnes **True** if a variable is greater then 0 and **False** if the variable equals 0. Note: To use *bool* you need to include the following header: **#include <stdbool.h>** and the variable must have *bool* before it, this is because Boolean is not a built in operation in c. 

### voids

*void* is an incomplete data type. a *void* data type menas "nothing" and can be considered **absent**, if a function returns nothing then the data type returned should be *void*. 

### pointers

A *pointer* is a variable that points to the storage/memory address of another variable. To create a pointer you first declare its data type, then you place an asterisk between the data type and the variable name. For example: **int * pointer;**. To get the address of the variable we are pointing to, we must set the pointer equal to the variable we want to point at with an & symbol in front of the variable name. Example: **pointer = &variable;**

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












