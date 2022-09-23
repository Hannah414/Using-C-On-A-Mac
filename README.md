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

int(main){statments}

This is an example of a basic function in C. In the example, we have named our function *main*, but you could name it however you want as long as you start with a letter or underscore and only include letters, numbers, or underscores. (Please note that there is a 31 character limit)

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

We will be creating a Hello World program. We will need to create a function that outputs the phrase "Hello World!". 

First we will need **#include <stdio.h>** in order to have an output. 

Next, we will need to create a function so that C will execute our code. **int main() { }**

Then , within the curly brackets of the function, we will insert our print command: **printf("Hello World!")**

All together, we should have something like this: 

![Example of completed Hello World Code](https://i0.wp.com/www.developersumo.com/wp-content/uploads/2021/08/carbon-20.png?fit=804%2C588&ssl=1)

Congratulations! You have completed your first program in C!

## Data Types 

In C, data types are declarations for variables that determines the type and size of the data we associate with each variables. Every variable used in C muxt be declared before it can be used. 

We will be going over ints, chars, floats, arrays, booleans, dictionaries, and voids. 

### ints

*int* variables are whole numbers that can have both zero, negative, or positive values. These variables are declared when you write *int* before the variable. 

### chars

*char* is used to declare chratacter type variables, you can use anycharacter contained withing quotes or apostrophes. These variables are declared when you write *char* before the variable. 

### floats

*float* is used to hold real numbers, these numbers can be positive, negative, rational or irrational. You can also use *double* the same way as a float for longer, more accurate numbers. These variables are declared when you write *float* (or *double*) before the variable. 

### arrays

*arrays* are variables that can store multiple values of the same type in one variable instead of multiple. *arrays* must be declared, and are created when square brackets are places diractly following the variable name and are set equal to it values which are contained in curly brackets and seperated by commas. For example: **int var[] = {1,2,3}**

### booleans

*bool* is a variable type that returnes **True** if a variable is greater then 0 and **False** if the varibale equals 0. Note: To use *bool* you need to include the following header: **#include <stdbool.h>** 













