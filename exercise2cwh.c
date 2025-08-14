#include <stdio.h>

void kmtomiles() {
    float a;
    printf("You selected kilometer to miles converter. Enter the value in kilometers: ");
    scanf("%f", &a);
    float b = a / 1.609;
    if (a == 1 && b == 1) {
        printf("%f kilometer is %f mile\n", a, b);
    } else if (a == 1 && b != 1) {
        printf("%f kilometer is %f miles\n", a, b);
    } else if (a != 1 && b == 1) {
        printf("%f kilometers is %f mile\n", a, b);
    } else {
        printf("%f kilometers is %f miles\n", a, b);
    }
}

void inchestofoot() {
    float a;
    printf("You selected inches to foot converter. Enter the value in inches: ");
    scanf("%f", &a);
    float b = a / 12;
    if (a == 1 && b == 1) {
        printf("%f inch is %f foot\n", a, b);
    } else if (a == 1 && b != 1) {
        printf("%f inch is %f foots\n", a, b);
    } else if (a != 1 && b == 1) {
        printf("%f inches is %f foot\n", a, b);
    } else {
        printf("%f inches is %f foots\n", a, b);
    }
}

void cmtoinches() {
    float a;
    printf("You selected centimeter to inches converter. Enter the value in centimeters: ");
    scanf("%f", &a);
    float b = a / 2.54;
    if (a == 1 && b == 1) {
        printf("%f centimeter is %f inch\n", a, b);
    } else if (a == 1 && b != 1) {
        printf("%f centimeter is %f inches\n", a, b);
    } else if (a != 1 && b == 1) {
        printf("%f centimeters is %f inch\n", a, b);
    } else {
        printf("%f centimeters is %f inches\n", a, b);
    }
}

void poundtokgs() {
    float a;
    printf("You selected pounds to kilograms converter. Enter the value in pounds: ");
    scanf("%f", &a);
    float b = a / 2.205;
    if (a == 1 && b == 1) {
        printf("%f pound is %f kilogram\n", a, b);
    } else if (a == 1 && b != 1) {
        printf("%f pound is %f kilograms\n", a, b);
    } else if (a != 1 && b == 1) {
        printf("%f pounds is %f kilogram\n", a, b);
    } else {
        printf("%f pounds is %f kilograms\n", a, b);
    }
}

void inchestometers() {
    float a;
    printf("You selected inches to meters converter. Enter the value in inches: ");
    scanf("%f", &a);
    float b = a / 39.37;
    if (a == 1 && b == 1) {
        printf("%f inch is %f meter\n", a, b);
    } else if (a == 1 && b != 1) {
        printf("%f inch is %f meters\n", a, b);
    } else if (a != 1 && b == 1) {
        printf("%f inches is %f meter\n", a, b);
    } else {
        printf("%f inches is %f meters\n", a, b);
    }
}

int main() {
    char hit = 'y';  // Initialize hit to 'y' to enter the loop.

    printf("WELCOME TO UNIT CONVERSION PROGRAM\n");

    while (hit == 'y' || hit == 'Y') {
        printf("SELECT ANY ONE OF THE FOLLOWING:\n");
        printf("1. KILOMETER TO MILES\n2. INCHES TO FOOT\n3. CENTIMETER TO INCHES\n4. POUNDS TO KILOGRAMS\n5. INCHES TO METERS\n");
        int num;
        scanf("%d", &num);

        switch (num) {
            case 1:
                kmtomiles();
                break;
            case 2:
                inchestofoot();
                break;
            case 3:
                cmtoinches();
                break;
            case 4:
                poundtokgs();
                break;
            case 5:
                inchestometers();
                break;
            default:
                printf("INVALID INPUT\n");
        }

        printf("Do you want to continue the program (Y/N)? ");
        scanf(" %c", &hit);
    }

    printf("THANK YOU!!\n");
    return 0;
}
