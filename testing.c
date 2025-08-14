#include <stdio.h> 
int main()
{
    int j;
    printf(" enter the elements for the array\n");
    int arr[4][5];
    for (int i= 0; i< 4; i++)
    {
        for ( j = 0 ; j< 5; j++ )
        {
            printf("enter the element %d%d ", i,j);
            scanf("%d", &arr[i][j]);

        }
    }
    for (int i= 0; i< 4; i++)
    {
        for ( j = 0 ; j< 5; j++ )
        {
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }
    return 0;

    
}