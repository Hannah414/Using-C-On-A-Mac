//here we include out header file that runs inputs and outputs 
#include <stdio.h>

//this code addresses functions
// functions follow the pattern data-type name (){}

//the order that you send variables to functions will be equal to the 
//order that the function assigns them 
//so in this case, in line 30, we sent a then b, so a will equal num1 and
//b will equal num2
int add(int num1, int num2){

//here we create a varible to store the result of our equation
//this will also be the varibale that is returned
int result;
result = num1 + num2;

return result;
}


int main(void){

//here we set vaiables to use for our examples 
// int answer is going to hold the return from function add
int a = 10;
int b = 5;
int answer;
//you can call other functions within a function
answer = add(a,b);
//answer now equals the value returned from the function add

printf("%d", answer);

return 0;
}

