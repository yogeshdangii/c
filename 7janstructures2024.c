// // structure in c pad liya hai and now i will be doing its exercise

// #include <stdio.h>
// #include <string.h>
// // one way to declare
// struct student
// {
//     int rollno;
//     char name[20];
//     float marks;
//     char school[20];

// } yogesh, shubham, akhilesh;      // yaha ab ye teeno global variables hai

// int main()
// {
//     printf("Basic demonstration of structures in c language\n");

//     strcpy(yogesh.name, "yogesh dangi");

//     printf(" yogesh's full name is %s\n", yogesh.name);

//     yogesh.marks = 16;
//     printf("yogesh's marks are %d\n", yogesh.marks);

//     yogesh.rollno = 114;
//     printf("yogesh's roll no is %d\n", yogesh.rollno);

//     strcpy(yogesh.school, "fr. agnel school");
//     printf("yogesh's school name is  %s\n", yogesh.school);




//     strcpy(akhilesh.name, "akhilesh sharma");

//     printf(" akhilesh's full name is %s\n", akhilesh.name);

//     akhilesh.marks = 16;
//     printf("akhilesh's marks are %d\n", akhilesh.marks);

//     akhilesh.rollno = 14;
//     printf("akhilesh's roll no is %d\n", akhilesh.rollno);

//     strcpy(akhilesh.school, "rewa school");
//     printf("akhilesh's school name is  %s \n ", akhilesh.school);



//     return 0;
// }


// method two to declare

// #include <stdio.h>
// #include <string.h>
// // another way to declare
// struct student
// {
//     int rollno;
//     char name[20];
//     float marks;
//     char school[20];

// } ;

// // global declaration of these variables
// struct student yogesh,shubham ,akhilesh;


// int main()
// {
//     printf("Basic demonstration of structures in c language\n");

//     strcpy(yogesh.name, "yogesh dangi");

//     printf(" yogesh's full name is %s\n", yogesh.name);

//     yogesh.marks = 16;
//     printf("yogesh's marks are %f\n", yogesh.marks);

//     yogesh.rollno = 114;
//     printf("yogesh's roll no is %d\n", yogesh.rollno);

//     strcpy(yogesh.school, "fr. agnel school");
//     printf("yogesh's school name is  %s\n", yogesh.school);




//     strcpy(akhilesh.name, "akhilesh sharma");

//     printf(" akhilesh's full name is %s\n", akhilesh.name);

//     akhilesh.marks = 16;
//     printf("akhilesh's marks are %f\n", akhilesh.marks);

//     akhilesh.rollno = 14;
//     printf("akhilesh's roll no is %d\n", akhilesh.rollno);

//     strcpy(akhilesh.school, "rewa school");
//     printf("akhilesh's school name is  %s \n", akhilesh.school);



//     return 0;
// }




// method three to declare

#include <string.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
    char school[20];

} ;




int main()
{
    struct student yogesh , shubham , akhilesh; // local variables here


    printf("basic demonstration of structures in c");
    

    strcpy(yogesh.name, "yogesh dangi");

    printf(" yogesh's full name is %s\n", yogesh.name);

    yogesh.marks = 16;
    printf("yogesh's marks are %f\n", yogesh.marks);

    yogesh.rollno = 114;
    printf("yogesh's roll no is %d\n", yogesh.rollno);

    strcpy(yogesh.school, "fr. agnel school");
    printf("yogesh's school name is  %s\n", yogesh.school);




    strcpy(akhilesh.name, "akhilesh sharma");

    printf(" akhilesh's full name is %s\n", akhilesh.name);

    akhilesh.marks = 16;
    printf("akhilesh's marks are %f\n", akhilesh.marks);

    akhilesh.rollno = 14;
    printf("akhilesh's roll no is %d\n", akhilesh.rollno);

    strcpy(akhilesh.school, "rewa school");
    printf("akhilesh's school name is  %s \n", akhilesh.school);



    return 0;
}
