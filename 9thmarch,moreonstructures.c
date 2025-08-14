// more details on the stucutures and different different ways to defind declare and access those 

#include<stdio.h>
#include<string.h>
int main()
{
    printf("More on structures \n");

    struct student {
        char name[20];
        int age ;
        int roll;

    } ramesh, suresh, akhilesh ;
    

    ramesh = (struct student ) { "ramesh", 19 , 69 };

    printf("The student's name is %s and age %d and roll no %d \n", ramesh.name, ramesh.age, ramesh.roll );

    // another way 

    struct student hari = {"hari", 20 , 200 };
    printf("The student's name is %s and age %d and roll no %d \n", hari.name, hari.age, hari.roll );


// using typedef here 

typedef struct {
    char names[10];
    int ages ;


} hello ;


hello kamlesh ;

strcpy(kamlesh.names , "kamlesh") ;

kamlesh.ages = 24;


printf("The name of the student using typedef of structures is %s and his age is %d ", kamlesh.names , kamlesh.ages );


}