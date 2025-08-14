#include<stdio.h>
int primenumber(int n)
{
    int i;
    for( i= 2; i<n; i++)
    {
        if(n % i == 0)
        {
        return 0;
        }
        

    }
    return 1;
}
int main(){
    printf("simple program to find wether a given number is prime or not ");
    int num;
    printf("\n Enter the number that you want to check ");
    scanf("%d",&num);
    primenumber(num);
    int temp = primenumber(num);


    if(temp == 1)
    {
        printf("number is  prime");
    }
    else
    printf("The number is not prime");
    


}