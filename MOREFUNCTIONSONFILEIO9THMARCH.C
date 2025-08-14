#include<stdio.h>

int main ()
{
    printf("using the tesfile.txt for testing more functions on file input and output \n");

//     FILE *ptr = NULL;

//    ptr=  fopen("testfile.txt", "a+");

//     fputc('h', ptr);


//  FILE *ptr = NULL;

//    ptr=  fopen("testfile.txt", "a+");

//     fputs("hello world ", ptr);




//  FILE *ptr = NULL;

//    ptr=  fopen("testfile.txt", "a+");

//    char c=  fgetc(ptr);

//    printf("%c", c);




 FILE *ptr = NULL;

   ptr=  fopen("testfile.txt", "a+");

char array[20];

    fgets(array ,15 , ptr);
    printf("%s", array);

    return 0;

}



