#include <stdio.h>

void palindrome(int n)
{
    int numdigits = 0;
    int temp = n;
    int rand = temp;
    int lastdigit;
    int i= 0;
    int arr[10] ;
    while (temp != 0)
    {
        lastdigit = temp%10; // gives the last digit 
        temp /= 10;
        arr[i] = lastdigit ;
        numdigits++;
        i++;
 }
  
  temp = n;

int final =0;
int tempnum = numdigits;
  while (temp != 0 )
  {
    rand  = temp % 10 ; // gives the last digit
    if( rand == arr[numdigits -1] )
{
    final++;
}
numdigits--;
temp /= 10;

  }
   
   if ( final == tempnum )
   {
    printf("given number is a palindrome number ");

   }
   else 
   printf("given number is not a palindrome number ");

}
int main()

{
    printf("enter a number \n");
    int number;
    scanf("%d", &number);
    palindrome(number);
    return 0;
}