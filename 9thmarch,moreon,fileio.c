#include<stdio.h>
int main()
{
    printf("A program demonstrating more about file input and output \n");

    // FILE *pointer = NULL;

    // pointer = fopen("testfile.txt", "r");
    // char str[50];
    
    // fscanf(pointer, "%s" , str );
    // printf("The contents of the file reads as follows %s \n", str);    *****this was basic reading using fscanf


    FILE *pointer = NULL;

    pointer = fopen("testfile.txt", "r+");
    char str[100];
    
    fscanf(pointer, "%s" , str );
    fprintf(pointer ,"%s" , "thisisatestagain");
    printf("The contents of the file reads as follows %s \n", str);   //  ** r+ mode checked 

    //    FILE *pointer = NULL;

    // pointer = fopen("testfile.txt", "w");
    // char str[100];
    
    
    // fprintf(pointer ,"%s" , "thisisatestagain");
    // fclose(pointer); // to close the file otherwise it will remain busy during the entire program 





//    FILE *pointer = NULL;

//     pointer = fopen("testfile.txt", "w+");
//     char str[100];
    
//     fscanf(pointer, "%s" , str );  //reading the file 
//    // fprintf(pointer ,"%s" , "thisisatestagain"); // but this will write from scratch as soon as we open in w+
//     printf("The contents of the file reads as follows %s \n", str);  




//   FILE *pointer = NULL;

//     pointer = fopen("testfile.txt", "a");  // we can now write to the file without clearing its contents 
//     char str[100];
    
//     fprintf(pointer ,"%s" , "thisisatestagain");    /// puts after the text which is initially present in the file 
//       /// can only write in this mode 
//       fclose(pointer);





    //     FILE *pointer = NULL;

    // pointer = fopen("testfile.txt", "a+");
    // char str[100];
    
    // fscanf(pointer, "%s" , str );  //reading the file /
    // fprintf(pointer ,"%s" , "thisisatestagain"); //                 can read as well as write in this mode !!!!!!!!!
    // printf("The contents of the file reads as follows %s \n", str);

/// EVERYTHING WORKS FINE !!!!!!

}