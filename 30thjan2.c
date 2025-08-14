//to print prime numbers from 1 to n
//  then printing the fibonacci series


#include<stdio.h>

int main()
{
    printf("Enter the number upto which you want to print the prime numbers ");
    
    int number ;
    scanf("%d", &number );

    printf("2 is a prime number \n");
    
    for (int i =3; i<= number ; i++)
    { int temp = 1;

        for(int j =2; j< i/2; j++)
        {
            if (i % j == 0 )
            {
                temp = 0;
                
            }
        }
            if(temp)
            {
                printf("%d is a prime number \n", i);
            }
    }

    return 0;


}