#include<stdio.h>
int main()
{
    printf("this covers all the lessons\n");

    printf("Hello world \n");

    printf("this is the size of int %ld\n", sizeof(int));
printf("this is the size of double %ld\n", sizeof(double));
printf("this is the size of float %ld\n", sizeof(float));
printf("this is the size of char %ld\n", sizeof(char));

//moving onto the input and output stuff now
//single character input and output

char a = getchar();

printf("you entered %c\n", a);

// multiple character input and output
char b[100];
gets(b);
printf("%s", b);
// s for string

// using scanf along with format specifier

int c;
scanf("%d", &c);
// & is the adress operator

printf("this is via the scanf function %d",c);

// now different output systems

char d = 'w';
printf("printed via putchar\n");
putchar (d);


















/*int a;
int b = 99;
scanf("%d",&a);
int c= a+b;

if(c< 99)
printf("your input was negative\n");
else
printf("your input was positive \n");*/

}