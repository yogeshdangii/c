#include<stdio.h>
union students 
{
    int rollno;
    int marks ;
    char grade;
};



int main()
{
    printf("Simple demonstration of unions \n");

    union students ramesh, suresh, mahesh ;

    ramesh.rollno = 1;
   
    
    printf(" roll no %d is ramesh , he got %d marks and %c grade \n", ramesh.rollno , ramesh.marks , ramesh.grade);

    suresh.rollno = 2;
    suresh.marks = 4;
    suresh.grade = 'C';
    printf(" roll no %d is suresh , he got %d marks and %c grade \n", suresh.rollno , suresh.marks , suresh.grade);

    mahesh.rollno = 3;
    mahesh.marks = 7;
    mahesh.grade = 'B';

    printf(" roll no %d is mahesh , he got %d marks and %c grade \n", mahesh.rollno , mahesh.marks , mahesh.grade);






    
    return 0;

}