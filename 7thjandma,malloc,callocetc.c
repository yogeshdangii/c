// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     printf("A very basic demonstration of malloc \n");

//     int *ptr;
//     ptr = (int*) malloc (3*sizeof(int));

//     for (int  i = 0; i < 3; i++)
//     {
//         printf("\nEnter the element %d  ", i);
//         scanf("%d", ptr+i);

//     }
    
//     for (int  i = 0; i < 3; i++)
//     {
//         printf("\n value of  the element %d  is %d:-", i, *(ptr+i));

        

//     }
//     free(ptr);
    

// }



// demonstration of calloc now

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptr ;
     ptr = (int*)calloc(5, sizeof(int));   // five blocks of int size reserved therefore , 5 contiguous array like reservation

     for(int i =0; i<5; i++)
     {
        printf("Enter the value %d element ", i);
        scanf("%d", &ptr[i]);
        
     } 

     for(int i =0; i<5; i++)
     {
        printf("The element %d  is %d \n", i, ptr[i]);

     } 




     // use of realloc in the same program

     ptr = (int*)realloc(ptr, 2*sizeof(int));
  for(int i =0; i<2; i++)
     {
        printf("Enter the value %d element ", i);
        scanf("%d", &ptr[i]);
        
     } 

     for(int i =0; i<2; i++)
     {
        printf("The element %d  is %d \n", i, ptr[i]);

     } 



     
     free(ptr);

return 0;
}