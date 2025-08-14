/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("please enter your age to check your eligiblity \n");
    
scanf("%d",&age);

    switch(age){
        case 40:
        printf("good");
        break;
        case 50:
        printf("still good");
        break;
        case 60:
        printf("yes sirr ");
        break;
        default :
        printf("you are not qualified as your age is not 40,50 or 60");

    

    }

    return 0;
}*/


//another mast use of switch
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;

    scanf("%d",&a);
    switch (a)
    {
        case 1:    // agar break nahi lagaya to teeno ko  eksath manega example
        case 2:
        case 3:
        printf(" 1 2 or 3");
        break;
        
    }
    return 0;
}
