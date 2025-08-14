// write a program to calculate product of digits of a number 

#include<stdio.h>
int main()
{
    int num, temp, product = 1, temp2;
    printf("Enter the number  ");
    scanf("%d",&num);

    temp = num;

    while( temp != 0){
        temp2 = temp%10; // last digit extracted
        temp = temp /10 ; // last digit removed
        product *= temp2;

    }
    printf("the product of the digits of %d is %d", num , product);
    return 0;
}

// works perfectly fine ;;;;;;