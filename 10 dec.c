#include<stdio.h>
int main()
{
    int array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int array2[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    int result[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    

    
    

    int j;

    for(int i =0; i<3; i++)
    {

    for(int j;j<3;j++)
    {
        for(int k=0; k<3; k++)
        {
       result[i][j]= result[i][j] +  array1[i][k]*array2[k][j] ;
        }
    }
    }
    


    for ( int l= 0; l< 3; l++)
    {
        for (int m =0; m< 3; m++)
        {
            printf("%d", result[l][m]);
        }
        printf("\n");
    }
    
    return 0;
}