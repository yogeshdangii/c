// in this one i will write and explain recursive functions 
// the functions that call themselves and go on till they are told to stop at the base value are called recursive functions 
// these recursive functions need to break , because if not then they will keep running forever leading to an infinite loop

#include <stdio.h>
// making a function for the factorial notation and then recursing it 
int factorial(int a){
    if( a == 1 || a== 0)
    return 1;
    else 
    return (a*factorial(a-1));
}
int main(int argc, char const *argv[])
{
    printf("enter the number you want factorial of \n");
    int a ;
    scanf("%d", &a);
    
    printf("the factorial of %d is %d", a, factorial(a));
    
  
    
    

    return 0;
}
// works great .....
