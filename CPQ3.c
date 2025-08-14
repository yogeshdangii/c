// write a program to enter a number and print the sum of its digits   

#include <stdio.h>

int main() {
    int number, temp, sum = 0, originalnumber;
    sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);
    originalnumber = number;

    temp = number;

    while (temp != 0) {
        int digit = temp % 10; // isse last digit number  nikal jayega
        temp = temp / 10; // last  digit hat jayega
        sum += digit; //  jo last digit nikla hai usko sum me add kar diya 
    }

    printf("The sum of the digits of %d is %d\n", originalnumber, sum);
    return 0;
}


// works fine