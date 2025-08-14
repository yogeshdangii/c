//iss vale me for loop seekh le 
// for loop bhi baki while ki tara hi hai bas thoda syntax alag hai
//  for (intivalue; condition; increment ){ 
 //   statement ;
//}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    for (a = 1; a<= 10; a++ ){
        for (b = 1; b<= 10; b++){
        printf( "%d X %d = %d\n", a ,b,a*b);
        }
        printf("ye le agla \n");

    }
    
    return 0;
}
