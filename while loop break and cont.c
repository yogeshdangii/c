// break ko switch ke liye design kiya gaya tha lekin while me bhi use karte hai for exammple

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
a= 5;
while (a<10)
{ if (a == 8)
break;
printf("hello\n");
a++;

}
    return 0;
}*/


//continue ka usage dekh --- iska  use karenge specific value ko skip karne ke liye--jesse iske output me 69 skip ho jayega 

#include <stdio.h>
int main()
{
    int a;
    a= 1;
    while (a<100)
    {a++;
        if (a== 69)
    continue;
        printf("😀 %d\n",a);
        


    }
    return 0;

}