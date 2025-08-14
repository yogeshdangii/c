// this code demonstrates functions to myself 
// type without arguement without return value

/*#include <stdio.h>

void kallu()
{
    int a;
    printf("apni value daalo");
    scanf("%d", &a);
    printf("aapne likha hai %d", a);
}
int main ()
{
    kallu ();
}*/
// idhar na to arguement hai and na hi return value 

// another example with same type
#include<stdio.h>
void printstar( )
{ 
    printf("       **********\n");
    printf("        ******** \n");
    printf("         ******\n");
    printf("           ** \n");

}
int main()
{
    for ( int i = 1; i<9; i++)
    printstar();
    return 0;
}