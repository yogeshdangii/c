// call by value vs call by reference
#include<stdio.h>
void finction(int *andu, int *bandu)
{
  int temp1,temp2;
  temp1 = *andu + *bandu;
  temp2 = *andu - *bandu;

  *andu = temp1;
  
  *bandu = temp2;

}
int main()
{
    int a,b;
    printf("a and b will be replaced by their sum and difference respectively \n Enter a and b   ");

    scanf("%d %d", &a, &b);

    printf("\n a and b are %d and %d respectively  before changing values", a,b);

    finction(&a, &b);

    printf("\n a and b are %d and %d after changing the values with sum and difference",a,b);

    return 0;

}