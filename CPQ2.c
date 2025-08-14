// code to swap the first and the last digit of a given number

#include <stdio.h>
int main()
{
    int number, firstdigit, lastdigit, temp, digits = 1, swapnumber;
    
    printf("ENTER THE NUMBER YOU WANT TO SWAP DIGITS OF \n");
    scanf("%d",&number );

    lastdigit = number % 10; // isse last digit aa jayega , ex agar 557 dala hai to remainder will be 7 thus last digit obtained
    temp = number; //ye isliye taki number me changes kiye bina uski value use kar le
    // to find the place value of the specified number, place value se divide karne pe first digit milega isliye find kar rahe
    while(temp>= 10)
    {

        temp = temp/10 ; // 557 ko ek bar kiya , to 50 ans(integer), dusri baar to 5 ans, teesri baar nahi hoga jayega  ruk jayega  thus do baar execution 
        // since do baar execute hua tha and place value is 100, let us define digits and multiply it with 10 on every execution
        digits *= 10 ;
    }

//now to find the first digit , divide by place value 
firstdigit = number / digits ;
// ab apne paas first digit bhi hai and last digit bhi hai , place value bhi hai
swapnumber = number -(firstdigit*digits) + (lastdigit*digits) - lastdigit + firstdigit; 
 // isse number me se first digit hat jayega ex, 557 -(5*100) = 57
 // fir 57 + 7*100   757, last digit front me aa gaya
 // fir 757 - 7 + 5 = 755 last digit hatke first digit uski jagah aa jayega
// job done
// if (number % digits == 0)
// {
//     if( digits == 100){
//     printf("AFTER SWAPPING THE FIRST AND THE LAST DIGITS, %d BECOMES 00%d", number, swapnumber );
//     }
//     else if ( digits == 1000){
//     printf("AFTER SWAPPING THE FIRST AND THE LAST DIGITS, %d BECOMES 000%d", number, swapnumber );
//     }
//     else if ( digits == 10){
//     printf("AFTER SWAPPING THE FIRST AND THE LAST DIGITS, %d BECOMES 0%d", number, swapnumber );
//     }
//     else if ( digits == 10000){
//     printf("AFTER SWAPPING THE FIRST AND THE LAST DIGITS, %d BECOMES 0000%d", number, swapnumber );
//     }
//     else if ( digits == 100000){
//     printf("AFTER SWAPPING THE FIRST AND THE LAST DIGITS, %d BECOMES 00000%d", number, swapnumber );
//     }
//     else if ( digits == 1000000){
//     printf("AFTER SWAPPING THE FIRST AND THE LAST DIGITS, %d BECOMES 000000%d", number, swapnumber );
//     }

// }
// else
// {
printf("AFTER SWAPPING THE FIRST AND THE LAST DIGITS, %d BECOMES %d", number, swapnumber);


return 0;


}
// works !!
