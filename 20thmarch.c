#include<stdio.h>
int largest (int a, int b, int c)
{
    if(a>b && a>c )
{
    return a;
}
else if (b>a && b>c )
return b;
else 
return c;
}

int main()
{
    printf("program to pick the largest among three numbers \n");

    printf("Enter three numbers \n ");

    int a,b,c ;

    scanf("%d %d %d", &a,&b,&c);
    
    int larges = largest(a,b,c) ;
    printf("%d is the largest number ", larges);
      
}