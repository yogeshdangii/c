#include<stdio.h>

int palindrome (int number )
{
    int temp, lastdigit , reversed=0 ;
    temp = number ;
    while (temp != 0)
    {
    lastdigit = temp % 10;
reversed = reversed*10 + lastdigit ;
temp = temp/10;


    }

    if ( number == reversed  )
    {
        return 1;
    }
}

int main ()
{
  printf("Enter a number to check wheather it is a palindrome number or not \n");
  int number ;
  scanf ("%d", &number );

int returning = palindrome(number);
if (returning == 1)
{
    printf("entered number is  a palindrome number ");

}
else 
printf("The entered number is not a palindrome number ");

}