// with arguement and with a return value 

#include<stdio.h>

int printstar (int a, int b)
{
    printf("enter a  ");
    scanf("%d", &a);
    printf("enter b  ");
    scanf("%d", &b);
    return a+b;

}
int main()
{
    int a,b;
    
    int c;
    c = printstar(a,b);
    printf(" the sum of a and b is %d", c);
    return 0;
}
