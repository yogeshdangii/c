#include<stdio.h>


int main()
{
 
printf("program for matrix multiplication \n");
printf("please enter the order of the first matrix (add a space b/w rows and columns ex: 3 3 ) \n");
printf("please enter the order of the second matrix (add a space b/w rows and columns ex: 3 3 ) \n");
int i,j,n,m ;
scanf("%d %d", &i ,&j);

int array[i][j];
int array1[n][m];

for (int k =0 ; k< i ; k++)
{
    for (int l =0 ; l <j ; l++)
    {
        printf("Enter the element %d%d of the first matrix\n");
        scanf("%d", &array[k][l]);
    }
}



}