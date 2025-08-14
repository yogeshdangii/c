// sprintf and sscanf ka usage

#include<stdio.h>
int main()
{
     char info[100];
     char employees[50] =" rajesh and rakesh";
     int salary = 12;

     sprintf(info,"the employees of my company are %s and i pay them %d kpm", employees, salary); 

     puts(info);

     // example of sscanf --  reads from a string
     char information[100] = "garentiyadangi bhopal madhyapradesh";
     char village[20];
     char city[20];
     char state[20];
     
     sscanf(information,"%s %s %s",village , city, state );

     printf("i live in the %s village of %s city of %s state", village , city, state);
return 0;
}

// and that is it 