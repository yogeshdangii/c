// #include<stdio.h>
// int main()
// {
//     printf("RECTANGLE AREA CALCULATOR\n");

    // printf("Enter the length of the rectangle-- \n");
// int num1, num2 ;
// scanf("%d", &num1);
//     printf("Enter the breadth of the rectangle --\n");
// scanf("%d", &num2);

// printf("The area of the rectangle having lenght %d units and breadth %d units is %d unit square ", num1,num2, num1*num2);
// }



// #include<stdio.h>
// int main()
// {
//     printf("a program to print the weekdays using switch case \n");
//     printf("Enter the number for the weekdays 1 to 7 \n");
//     int number ;
//     scanf("%d",&number);

//     switch (number)
//     {
//         case 1:
//         printf("monday");
//         break;
        
//         case 2:
//         printf("Tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thursday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("saturday");
//         break;
//         case 7:
//         printf("sunday");
//         break;

//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf("A simple C program that creates and displays a 2D array");

//     int arr[3][3];
//     for (int i=0; i<3;i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("\nEnter the %d%d element of the array :- ", i,j);

//             scanf("%d", &arr[i][j]);

//         }
//     }
    
//     for (int i=0; i<3;i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("%d ", arr[i][j]);

//         }
//             printf("\n ");
//     }
//     return 0;

// }

// #include<stdio.h>

// void matrixadd (int array[][3], int array1[][3], int n)
// {
//     int array2 [n][n];
//     for(int i=0; i<n; i++)
//     {
//     for(int j=0; j<n; j++)
//     {
//         array2[i][j] = array[i][j] + array1[i][j];
//     }

//     }
//     for(int i=0; i<n; i++)
//     {
//     for(int j=0; j<n; j++)
//     {
//        printf("%d " , array2[i][j]);

//     }
//     printf("\n");

//     }
    
// }
// int main()
// {
//     printf("A simple c program to add a 2d array \n");
//     int array1[3][3] = {{11,22,11},{11,22,11} ,{11,22,11}};
//     int array2[3][3] = {{11,22,11},{11,22,11} ,{11,22,11}};

//     matrixadd( array1, array2, 3);
    
// }


// #include<stdio.h>
// #include<string.h>
// struct students
// {
    
//     int age;
//     int rollno;
//     char name[20];

// };
// int main()
// {
//     printf("program that maintains student information using structures \n");
//     struct students s1, s2, s3;

// strcpy(s1.name , "ramesh");

// printf("name of s1 is %s", s1.name);

     





// }


// #include<stdio.h>
// void starpattern(int n)
// {
//     for(int i =0; i< n ; i++)
//     {
//         for(int j=0; j<i+1; j++)
//         {
//         printf("*");
//     }
//     printf("\n");
    
// }
// }
// int main()
// {

//     printf("Program to print increasing star pattern\n");
     
//      starpattern(5);


// return 0;
// }

#include<stdio.h>
#include<stdlib.h>

int main()
{
     printf("to implement malloc()  and calloc() \n");

int *ptr;
ptr =(int*) malloc(10*sizeof(int));

for (int i =0; i<10; i++ )
{
    *(ptr+i ) = 
}





return 0;

}
