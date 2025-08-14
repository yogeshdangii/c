// to determine whether a number is prime or not

#include <stdio.h>
int main()
{
    printf("A basic c program to check whether a number is prime or not");
int number ;
    printf("\n Enter the number you want to check  ");

    scanf("%d",&number);
int temp =1 ;
    for(int i= 2; i<number/2; i++)
    {
        if (number % i == 0)
        {
            temp = 0;
            
        }
    


       
    }
    if (temp == 0)
    {
        printf("Number is not prime");

    }
    else 
    printf("number is prime");


    return 0;
}