// here i will be learning the while loop and writing some basic code in it 
//The while statement is called a loop structure because it executes statements repeatedly while an expression is true,
// looping over and over again. 

/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter your marks\n ");
    scanf ("%d",&a);
     
     while (a<10)
   {  printf("i am sorry \n");
     a++;
   }

    return 0;
}*/

//      THE DO WHILE LOOP-- YE BHI SAME HAI BAS ISME  HAR HAAL ME EK BAAR TO EXECUTE KAREGA

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter a number ");

    scanf("%d",&a);

    do
    {
        printf("hello world \n");
        a++;
    
    }
    while( a< 10);
    
    

    
    return 0;
}

