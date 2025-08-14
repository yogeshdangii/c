#include<stdio.h>

int primenumber (int n)
{
    int temp= 2;
    while(temp< n )
    {
        if(n%temp == 0)
        {
            return 1;
            

        }
         temp++;
    }

    return 0;

}
int main()

{
    

    printf("a very simple program to determine whether a number is prime or not");
    printf("\n Enter a number you want to check ");
    int number;
    scanf("%d", &number );

    int hello;
    hello = primenumber(number);

    if (hello == 0)
    {
        printf("%d is prime", number);

    }
    else
    printf("%d is not prime",number);

    return 0;


}