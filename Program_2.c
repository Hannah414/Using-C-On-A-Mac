#include <stdio.h>
#include <stdbool.h>

// Data Types in C
// we will go over ints, floats, chars, arrays, booleans, voids, and pointers
int main() {
  
//ints
//ints are varibles that contain whole numbers, 
//they can be positive or negative
int x = 5;
int y = -10;

//floats (also called doubles)
//float is used to hold real numbers, 
//these numbers can be positive, negative, rational or irrational
float z = 8.2;
float q = -9.3;

//chars
//char is used to declare character type variables
//any character contained withing quotes or apostrophes
char name = "Mary";
char city = 'Boston';

//arrays
//arrays are variables that can store multiple values 
//of the same type in one variable
int list1[] = {1, 2, 3};
char list2[] = {"Mary", "Mark", "May"};

//booleans
//c does not contain true boolean data
//if you want to use booleans in your data, you must 
//have #include <stdbool.h> at the start of your program
bool arr[2] = { true, false};

//voids
//void is a data type returned when a function has nothing to return 

//pointers
//A pointer is a variable that stores the memory address of another variable as its value.
//use & to indicate that you want the memory address of a variable
//create a pointer by having * after declaration and before variable 
int a = 23;
int* ptr = &a;  // A pointer variable, with the name ptr, that stores the address of a
printf("%d", a);  // Outputs the value of a
printf("%p", ptr); // Outputs the memory address of a


return 0;
}