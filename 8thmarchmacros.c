#include<stdio.h>

#define HELLO 45
int main ()
{

printf("the date today is %s and the time is %s and the filename is %s and this line's number is %d and it is being compiled with ansi std %d and this is some random shit %d", __DATE__ , __TIME__, __FILE__, __LINE__, __STDC__ , HELLO);


}