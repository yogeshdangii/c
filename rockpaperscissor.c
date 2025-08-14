#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


void main()

{
    char temp = 'y';

    while (temp == 'y' || temp == 'Y')
    {
        


srand(time(NULL));
int game = rand()%3 ;

// 0 for rock 
// 1 for paper 
// 2 for scissors

printf("Enter rock paper or scissor \n");
char *ptr = (char *) malloc(10*sizeof(char)) ;
scanf("%s", ptr);
printf(" you entered %s ", ptr);


int value;
if (strcmp(ptr,"rock") == 0)
{
value = 0;
}
if (strcmp(ptr,"paper") == 0)
{
value = 1;
}
if (strcmp(ptr,"scissor") == 0)
{
value = 2;
}

int outcome = 55;
// outcome 0 for win
//1 for lose 
// 2 for draw
if ( game == 0 && value == 0 )
{
    outcome = 2;
}
if (game == 0 && value == 1 )
{
    outcome = 0;
}
if (game == 0 && value == 2 )
{
    outcome = 1;
}
if (game == 1 && value == 0 )
{
    outcome = 1;
}
if (game == 1 && value == 1 )
{
    outcome = 2;
}
if (game == 1 && value == 2 )
{
    outcome = 0;
}
if (game == 2 && value == 0 )
{
    outcome = 0;
}
if (game == 2 && value == 1 )
{
    outcome = 1;
}
if (game == 2 && value == 2 )
{
    outcome = 2;
}


if (game == 0)
{
    printf(", i have rock!! ");
}

if (game == 1)
{
    printf(", i have paper!! ");
}

if (game == 2)
{
    printf(" ,i have scissor!! ");
}

if (outcome == 0)
{
    printf(" you win!! ");

}
if (outcome ==1)
{
    printf("you lose ,, hehehehhehehe");

}

if (outcome ==2)
{
    printf("okay koi na its a draw ,,,( heheheheheh) \n");
}

printf(" Wanna play again , Y/N  ");

free(ptr);
   
scanf(" %c", &temp);
   
    }



}