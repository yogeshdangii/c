// demonstration of simple 2d array along with a for loop  // practice
#include <stdio.h>
int main()
{

    int array[10][10];

    for (int i = 0; i< 10; i++)
    {
        for (int j = 0; j< 10; j++)
        {    
            array[i][j] = i+j ;

        }
    }

    for (int i = 0; i< 10; i++)
    {
        for (int j = 0; j< 10; j++)
        {
            printf("%d  ", array[i][j]);

        }
        printf("\n");
    }
return 0;
}