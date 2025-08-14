#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ( int argc, char *argv[])
{
    

    if (strcmp(argv[1],"sum") == 0 || strcmp(argv[1],"Sum")== 0  ||  strcmp(argv[1],"SUM")== 0)
    {
        int a,b;

        a = atoi(argv[2]);
        b = atoi(argv[3]);

        printf("The sum of the entered two numbers is %d", a+b);
    }



  else   if (strcmp(argv[1],"subtract") == 0 || strcmp(argv[1],"Subtract")== 0  ||  strcmp(argv[1],"SUBTRACT")== 0)
    {
        int a,b;

        a = atoi(argv[2]);
        b = atoi(argv[3]);

        printf("The difference of the entered two numbers is %d", a-b);
    }


    
   else if (strcmp(argv[1],"divide") == 0 || strcmp(argv[1],"Divide")== 0  ||  strcmp(argv[1],"DIVIDE")== 0)
    {
        float a,b;

        a = atoi(argv[2]);
        b = atoi(argv[3]);

        printf("The two numbers when divided gives %f", a/b);
    }

    
   else if (strcmp(argv[1],"multiply") == 0 || strcmp(argv[1],"Multiply")== 0  ||  strcmp(argv[1],"MULTIPLY")== 0)
    {
        int a,b;

        a = atoi(argv[2]);
        b = atoi(argv[3]);

        printf("The product of the entered two numbers is %d", a*b);
    }

    else{
        printf("please enter an operation(sum, divide, subtract, multiply ) along with two number inputs ");
    }

}