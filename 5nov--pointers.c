// 5 of nov -- 2023  ind vs sa 2023wc

// something about pointers 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int hello ; // declared hello
    hello = 10; // initialized the value ten to hello variable


    int *p = NULL; // declared a pointer p and it must be initialized with NULL  if value not assigned at the same time
    p = &hello ;    // pointed p towards the adress of hello variable

    printf("output from hello %d  \n  ", hello); // prints the vlaue of hello that is 10
    printf("output from p %x  \n  ", p);  // prints the adress of hello
    printf("output from *p %d  \n  ", *p); // prints the value of variable p is pointing to that is 10
    return 0;
}



// pointer is nothing just a type of variable which contains the address of another variable
// a pointer may also point towards another pointer -- in that case we use ** to declare that specific pointer 
