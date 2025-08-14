#include<stdio.h>

int main()
{
    printf("matrix multiplication program \n"); 

int row , column, rows, columns ;
printf("Enter the number of rows in first matrix ");
scanf("%d", &row); 
printf("Enter the number of columns in first matrix ");
scanf("%d", &column); 

printf("Enter the number of rows in the second matrix  ");
scanf("%d", &rows);
printf("Enter the number of columns in the second matrix  ");
scanf("%d", &columns);



if (column != rows )
{
    printf("matrix multiplication not possible ");
}
else 
{
    int array1[row][column];
    int array2[rows][columns];

    for(int i =0; i<row; i++)
    {
        for(int j=0 ; j<column; j++)
        {
            printf("Enter the %d%d element of the first matrix----", i,j);
            scanf(" %d", &array1[i][j]);
            
        }
        printf("\n");

    }
    for(int i =0; i<row; i++)
    {
        for(int j=0 ; j<column; j++)
        {
            printf("Enter the %d%d element of the second matrix----", i,j);
            scanf(" %d", &array2[i][j]);
            
        }
        printf("\n");\
    }

        printf("the two matrices as entered by the user are----- \n");

        for(int i =0; i<row; i++)
    {
        for(int j=0 ; j<column; j++)
        {
            printf("%d ", array1[i][j]);
          
        }
        printf("\n");

    }
    printf("\n and \n");
    
       for(int i =0; i<row; i++)
    {
        for(int j=0 ; j<column; j++)
        {
            printf("%d ", array2[i][j]);
          
        }
        printf("\n");

    }


    }

}


// DO LATER NOW 

