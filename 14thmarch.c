#include<stdio.h>
#include<math.h>

float euclidiandist(int a, int b, int c, int d)
{
    float answer = sqrt( (a-b)*(a-b) +(c-d)*(c-d) );
    return answer;

}
void area( int a, int b, int c, int d , float (*ptr)(int,int,int,int))
{
    float temp = euclidiandist(a,b,c,d) ;
    float areaof = 3.14*temp*temp ;
    printf("The area of the cirlcle is %f ",areaof);

}
int main()
{

    printf("Program to calculate the area of a circle using callback functions  \n");
    int a,b,c,d ;
printf("Enter the x1 coordinate:--\n");
scanf("%d", &a);
printf("Enter the y1 coordinate:--\n");
scanf("%d", &c);
printf("Enter the x2 coordinate:--\n");
scanf("%d", &b);
printf("Enter the y2 coordinate:--\n");
scanf("%d", &d);

euclidiandist(a,b,c,d);
float (*ptr)(int,int ,int ,int ) ;
ptr = euclidiandist ;
area(a,b,c,d,ptr);




}

// works perfect 

