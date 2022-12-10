//here we include out header file that runs inputs and outputs 
#include <stdio.h>

//this code addresses loops and functions 
int main(void){


//for loops; will run as long as condition is met
// pattern: for(initilization;condition;incr/decr){executed code}
//set b as an int
//set b equal to 1, and while b is less then 4, have b increase by 1
//every loop, and print b every loop
int b;
for(b = 0; b < 5; b++){
    printf("%d",b);
}
 

//while loops; will only run as long as condition is met
//pattern: while(conditionIsTrue){execute code}
//set varible 
int z = 0;
while (z < 5){
    printf("%d", z);
    z++;
}

//do while loops; runs code block once,then repeats if/so long as condition is met
//
int q = 0;
do {
    printf("%d", q);
    q++;
}
while(q<5);

//end main 
//final output shoul be 01234 01234 01234
return 0;
}
