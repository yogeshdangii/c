// to write a program to enter a number and print its reverse

#include<stdio.h>
int main()
{
    int num, lastdigit, remainder, digit =0 ;

    printf("enter the number you want to be reversed");

    scanf("%d", &num);
    remainder = num;


    while(remainder != 0 )
    {
      lastdigit  = remainder % 10 ; // to extract the last digit    
      digit = digit * 10 + lastdigit ; 
      remainder = remainder / 10;
      

    }

    printf("the reversed number is %d" , digit );
}