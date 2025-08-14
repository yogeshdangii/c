// strings ki practice for end sem


#include<stdio.h>
int main()
{
     char string1[50];
     printf("Enter the string you want to enter in the string1 array\n");

// scanf("%s", string1);

// gets(string1);

  fgets(string1,50,stdin); // ye 5 me fgets null ko pehle hi included rakhta hai


    //  printf("\n\n\n\n\n YOU ENTERED \n %s", string1); 

    // puts(string1);

fputs(string1, stdout);
return 0;
}