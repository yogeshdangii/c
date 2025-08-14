/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
printf("enter your rank");

    scanf("%d",&a);

    if (a==1)
    printf("good");
    else if (a==2)
    printf("still good");
    else if (a==3)
    printf("okayish");
    else
    printf("bhag ja yaha se");

    return 0;
}
*/

//nested if ka example 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    if (a>50)
    {
        if(a>55)
        printf("good");
        else
        printf("just passed");

    }
    return 0;
}

//remove the comments and try these codes for revision
