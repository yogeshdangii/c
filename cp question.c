// write a program to check number is prime or not 

#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("enter the number   ");
    int number;
    scanf("%d", &number);
    int i;
    float c = number/i ;
    for ( i = 2 ; i< number ; i++)
    {
        if ((int)number/i != c    && i != number)
        {
            printf("the number is not prime \n ");
        }
        else 
        printf("the number is prime");

    }

    return 0;
}
