// // array reversal

// #include<stdio.h>
// void arrayreversal(int *ptr)
// {
//     int array[7];
//     for (int i=0;i<7;i++ )
//     {
//         *(array +i) =*(ptr + i) ;
//     }
// for (int j=6,k=0; j>=0; j--,k++)
// {
//     *(ptr +j) = *(array +k);
// }
// }
// int main()
// {
//      printf("array reversal program");

//      int array[7]= {11,22,33,44,55,66,77};
//      printf("array elements before reversal\n");

//      for (int i =0; i<7; i++)
//      {
//        printf("the element %d of the array is %d\n ", i+1, array[i]);
       
//      }

//      arrayreversal(array);
//      printf("array elements after reversal\n");

//      for (int i =0; i<7; i++)
//      {
//        printf("the element %d of the array is %d\n ", i+1, array[i]);

//      }
// return 0;
// }




// array reversal another method

#include<stdio.h>
void arrayreversal(int array[])
{
  int temp;
  for (int i = 0; i<7/2; i++)
  {
    temp = array[i];
    array[i] = array[6-i];
    array[6-i] = temp;

  }
}
int main()
{
     printf("array reversal program");

     int array[7]= {11,22,33,44,55,66,77};
     printf("array elements before reversal\n");

     for (int i =0; i<7; i++)
     {
       printf("the element %d of the array is %d\n ", i+1, array[i]);
       
     }

     arrayreversal(array);
     printf("array elements after reversal\n");

     for (int i =0; i<7; i++)
     {
       printf("the element %d of the array is %d\n ", i+1, array[i]);

     }
return 0;
}




