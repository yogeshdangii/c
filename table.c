#include<stdio.h>
int main(){
    printf("enter the number you want table of ");
 

    for (int i = 1; i<= 100000; i++)
    {
        for (int j = 1; j< 11; j++)
        {
            printf(" %d X %d = %d\n", i,j, i*j);

        }
        printf("\n");

    }
}

