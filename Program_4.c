//here we include out header file that runs inputs and outputs 
#include <stdio.h>

//this code addresses conditional statments 
int main(void){

// if/else/if else
//used to specify general and specific conditions
// try changing the value of x to see how the output changes 
int x = 0;
if (x = 0){
    printf("x = 0");
}
else if (x > 0){
    printf("x > 0");
}

else {
    printf("x < 0");
}

// switch
//used to specify specific conditions
int y = 0;
switch (y){
    case(0):
        printf("y = 0");
        break;
    case(1):
        printf("y = 1");
        break;
    case(2):
        printf("y = 2");
        break;
    
}


return 0;
}