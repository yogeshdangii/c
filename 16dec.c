#include<stdio.h>
void printstar1(int n)
{
    for(int number = 1; number <= n; number++)
    {
        for(int j = 1; j <= number; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
}

void printstar2(int n)
{
      for(int number = n; number >= 1; number--)
    {
        for(int j = 1; j <= number; j++ )
        {
            printf("*");
        }
       printf("\n");
    }
}

int main()
{
    int random;
     printf("PRESS 1 FOR INCREASING STAR PATTERN \n PRESS 2 FOR REVVERSE INCREASING STAR PATTERN ");
     int number1;
     scanf("%d", &number1);
     if(number1 == 1)
     {
        printf("enter the number of line of stars you want to be printed increasingly \n");
        scanf("%d",&random);

        printstar1(random);

     }
     else if(number1 == 2 )
     {
         printf("enter the number of line of stars you want to be printed IN REVERSE \n");
        scanf("%d",&random);

        printstar2(random);
     }
     else
     printf("please select between 1 and 2");
     

     int hello;
     scanf("%d", &hello);
    
return 0;
}
