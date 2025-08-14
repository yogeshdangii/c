#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int a = 10;
    int *b = &a;
    int *c;
    c= b;
    printf("a ki value %u \n " , a );
    printf("address of a  is %u  \n" , &a );
    printf("the  address of b is %u \n " , &b );
    printf("the address of c is %u \n " , &c );
    printf("the value of b  %u \n " , b );
    printf("the value of c %u \n " , c );
    printf("the value of *c %u \n " , *c );
    printf("the value of *b %u \n " , *b );
    printf("the value of &*c %u  \n" , &(*c) );
    return 0;
}
