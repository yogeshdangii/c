#include<stdio.h>
int printsum (int a , int b)
{
    return a+b;

}

void usesum(int x, int y, int(*ptrx)(int , int ))
{
    int sum = printsum(x,y);
    printf("The sum of the entered numbers is %d", sum);

}


int main()
{
int(*ptr)(int , int );
ptr = &printsum ;
int x,y ;
printf("Enter two numbers to add :--  ");
scanf("%d %d", &x, &y);
usesum(x,y,ptr);

return 0;
}