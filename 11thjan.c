#include<stdio.h>






int main()
{
    int arr[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("enter the value of the %d%d element of the matrix1 \n", i,j);
             scanf( "%d",&arr[i][j]);

        }
        
    }
    printf("now for the elements of the second matrix");

    int arr2[3][3];
for ( int i=0; i<3; i++)
    {
        for (int  j=0; j<3; j++)
        {
            printf("enter the value of the %d%d element of the matrix2 \n", i,j);
             scanf( "%d",&arr2[i][j]);

        }
    }
    int resultarr[3][3];

for (int i=0; i<3;i++)
{
    for (int j =0; j<3;j++)
    {
        resultarr[i][j] = arr[i][j]
    }
}








return 0;
}