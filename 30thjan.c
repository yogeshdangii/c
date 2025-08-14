#include<stdio.h>
int main()
{
     printf("A basic program to convert celsius to fahrenheit \n");
     printf("Enter the value in celsius  :-");
     float temp;
     scanf("%f", &temp);

      float result;
      result = ((9*temp) / 5) +32 ;

      printf("\n %f degrees in fahrenheit is %f ", temp , result);
return 0;
}