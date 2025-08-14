#include <stdio.h>

void convertToText(int digit) {
    switch (digit) {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            printf("Invalid input ");
    }
}

int main() {
    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Determine the number of digits in the input number
    int temp = number;
    int digitCount = 0;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }

    // Store the textual representations in an array
    char textArray[digitCount][10];

    // Handle each digit separately
    for (int i = 0; i < digitCount; i++) {
        int lastDigit = number % 10;
        convertToText(lastDigit);
        number /= 10;
    }

    return 0;
}
