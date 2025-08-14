// compare strings using pointers
// to print array of strings
// to capitalize first letter of each word of a string
// to find the frequecy of character in a string
// to remove all the spaces from a string

// to compare strings using pointers

#include<stdio.h>

int comparestrings( const char *str1, const char *str2 )
{
while( *str1 != '\0' && *str2 != '\0' && *str1 == *str2)
{
   str1++;
   str2++;
}

   if (*str1 == *str2)
   {
        return 0;
   }
   else 
   return 1;

}
int main()
{
    const char *string1 = "hello";
    const char *string2 = "hello";

    int temp = comparestrings(string1, string2);
    if (temp == 0)
    {
        printf("the strings are same");

    }
    else 
    {
        printf("the strings are different");

    }
    
return 0;
}
