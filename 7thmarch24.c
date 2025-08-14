// void pointer example 


// #include<stdio.h>

// int main()
// {
//      void * ptr ;

//      int hello = 34; 
//      ptr = &hello ;

//      printf("The address to which ptr is pointing to is %d and the value at that address is %d" , ptr , *((int *)ptr) );
     
// return 0;

// }


// NULL pointer example 


// #include <stdio.h>
// int main() 
// {
//      int hello = 34;

//      int *ptr = NULL ;
 
//      // printf(" let us dereference the null pointer here  %d  " , *ptr );    cannot dereference , this would result in a crash 

// }



// example of dangling pointer 

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {

//      int *ptr = (int *)malloc(sizeof(int)) ;

// *ptr = 34;

// printf("the address of the pointer is %d and the value is %d", ptr, *ptr);

// // now i will free the memory allocated 

// free (ptr);
// // now it is a dangling pointer 



// }

// wild pointer example 

#include<stdio.h>
int main()
{
      int *ptr;

      // ptr is now  a wild pointer
      

return 0;
}