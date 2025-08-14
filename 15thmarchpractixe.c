// #include<stdio.h>

// int factorial(int a)
// {if (a == 1 || a== 0)
//   return 1;
//   else
//     return (factorial(a-1)*a) ;
// }
// int main()
// {
//     printf("practice page used for doing revision \n");
//     printf("Enter the number you want factorial of :== ");
//     int number ;
//     scanf("%d", &number );
// printf("The factorial of the entered number is %d", factorial(number ));

// }       works well 


// works well 

// writing a program to find all the armstrong numbers from 1 to 9999

#include<stdio.h>
#include<math.h>

int main()
{
    printf("All the armstrong numbers from 1 to 9999 are listed below \n");
int array[10000];

for (int i=0; i<10000 ; i++)
{
    array[i] = i ;

}
    int  a,b,c ,d;
for (int i=0; i<10000; i++)
{
    int temp ;
    temp = array[i] ;
 
a = temp%10; // last digit aa gaya 
temp /= 10;
b = temp%10;
temp /= 10;
c =temp%10;
temp /=10 ;
d = temp%10;
if(pow(a,3)+pow(b,3)+pow(c,3)+pow(d,3) == array[i])
{
    printf("%d is an armstrong number \n", array[i]);
}
}




}



