// i will be making an array and initialize it the required values one by one

#include<stdio.h>
int main()
{
   int  arr[5][5] ;

   for (int i =0; i<5; i++)
   {
    for (int j = 0; j<5; j++)
    {
      scanf("%d ", &arr[i][j]);
    }
   }  

printf("HERE IS YOUR ARRAY \n");

for(int  i= 0; i<5; i++)
{
  for (int j =0; j<5; j++)
  {
    printf("%d    ", arr[i][j]);
  }
  printf("\n");

}



return 0;
}