// a printstar program to repeat over and over


#include<stdio.h>
void printstar ()
{
    printf("*\n**\n***\n****\n*****");
    
}
int main()

{
    start_here:
    printstar();
     printf("enter Y to print again\n ");
     char temp;
     scanf(" %c", &temp);

     if(temp == 'y' || temp == 'Y')
     {
        goto start_here ;

     }
     else 
     printf("\nhave a nice day");
}