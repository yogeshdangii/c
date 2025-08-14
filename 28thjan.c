#include<stdio.h>
#include<string.h>

int main()

{
    int n =1;
    while (n>0)
    {
    printf("ROCK PAPER SCISSORS\n");

    char array[20];

    scanf("%s", array);

    if(strcmp(array ,"rock") == 0 || strcmp(array, "ROCK") == 0)
    {
        printf("paper!! , i win!!!");

    }
    else if(strcmp(array ,"paper") == 0 || strcmp(array, "PAPER") == 0)
    {
        printf("scissors!! , i win!!!!");

    }
    else if(strcmp(array ,"SCISSORS") == 0 || strcmp(array, "scissors") == 0)
    {
        printf("rock!!!, i win!!");

    }

else
printf("please provide a valid input that is rock paper or scissors ");

printf("\n Do you want to play again \n1--YES \n0--NO \n");
scanf("%d", &n);
if(n !=0 && n!= 1)
{
   printf(" bad input, exiting the program ");
   n = 0;
}
    }




    return 0;
}