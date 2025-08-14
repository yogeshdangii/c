// write a program to enter week days with their name using switch


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int day;
    printf("enter week no from 1-7\n");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
    printf("sunday");
    break;
    case 2:
    printf("monday");
    break;
    case 3:
    printf("tuesday");
    break;
    case 4:
    printf("wednesday");
    break;
    case 5:
    printf("thursday");
    break;
    case 6:
    printf("friday");
break;
case 7:
printf("saturday");
break;
default:
printf(" please enter a digit between 1 and 7  ");


    }
    return 0;
}
