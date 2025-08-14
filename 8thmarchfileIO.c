#include<stdio.h>
int main()
{
    printf("simple demonstration of file input and output functions in c \n");
    FILE *ptr = NULL;
    // ptr = fopen("testfile.txt", "r");

    // char array[50];
    // fscanf(ptr, "%s", array);

    // printf("The file says  --%s--", array);    **** this was reading the file and putting its contents in array



//** write mode me content of the file scratch se rewrite ho jayega 
//     ptr = fopen("testfile.txt", "w");
// char array[50];
// printf("Enter the string you want to put in the file \n");

// fgets(array,50,stdin );

// fprintf(ptr, "%s", array);


// **append mode -- scratch se rewrite nahi hoga file me 
  ptr = fopen("testfile.txt", "a");
char array[50];
printf("Enter the string you want to put in the file \n");

fgets(array,50,stdin );

fprintf(ptr, "%s", array);


}