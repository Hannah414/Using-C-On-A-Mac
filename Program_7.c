//here we include out header file that runs inputs and outputs 
#include <stdio.h>
#include <string.h>

//this code addresses structs 
// create stuct called books that holds values for title, author, subject, and length
struct Books {
   char  title[50];
   char  author[50];
   char  genre[100];
   int   length;
} book;


int main(void){

    struct Books Book1; // declare Book1 as a Book struct

    // add in values for title, author, subject, and length
    strcpy( Book1.title, "Harry Potter");
    strcpy( Book1.author, "J.K.rowling"); 
    strcpy( Book1.genre, "fiction");
    Book1.length = 543;

    // print values for Book1
    printf( "Book 1 title : %s\n", Book1.title);
    printf( "Book 1 author : %s\n", Book1.author);
    printf( "Book 1 genre : %s\n", Book1.genre);
    printf( "Book 1 length : %d\n", Book1.length);

return 0;  
}