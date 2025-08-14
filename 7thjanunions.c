//simple demonstration of unions in c

#include<stdio.h>
union data
{
    int age;
    int marks;
    int para;

} hello;

int main()
{
     printf("This is a simple demonstration of unions in c \n");

hello.age = 14;

printf(" The age of hello is %d\n", hello.age);// ye sahi print hoga

hello.marks= 20;
hello.para = 69;
printf("marks of hello are %d \nand age is %d \n and para is %d", hello.marks, hello.age, hello.para);
// but in sab pe sirf 69 hi print hoga becoz para ko last me memory me dala hai, therefore para = 69
// usi memory location pe betha hai jaha pe age and makrs ko program dhoond raha hai, 
// therefore unhe bhi 69 hi mil raha hai


return 0;
}