// armstrong number from 1 to 999 printing program  

#include<stdio.h>
int main()
{
     int arr[999] ;
     for (int i=0; i< 999; i++)
     {
        arr[i] = i+1;

     }
     printf("\n %d    \n\n", arr[998]);

int temp, temp1,temp2,temp3;

     for (int i=0; i< 999; i++)
     {
        temp = arr[i];
        temp1= temp% 10;// last digit;
        temp= temp/10;// removes the last digit 
        temp2= temp%10;// middle digit 
        temp= temp/10; // again removing the last digit 
        temp3= temp%10; // final digit 

        if( temp1*temp1*temp1 + temp2*temp2*temp2 + temp3*temp3*temp3 != arr[i])
        {
            printf("%d is not armstrong number\n", arr[i]);
        }
        

     }


return 0;
}