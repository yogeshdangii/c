/*#include <stdio.h>

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Bubble sort with pointers
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(numbers + j) > *(numbers + j + 1)) {
                // Swap using pointers
                int temp = *(numbers + j);
                *(numbers + j) = *(numbers + j + 1);
                *(numbers + j + 1) = temp;
            }
        }
    }

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
*/

/*
#include <stdio.h>

// Define a structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int numStudents;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array of structures to store student information
    struct Student students[numStudents];

    // Input information for each student
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int numLines;

    // Input the number of lines for the pattern
    printf("Enter the number of lines: ");
    scanf("%d", &numLines);

    // Generate the incrementing star pattern
    for (int i = 1; i <= numLines; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr_malloc = (int*)malloc(5 * sizeof(int));
    int *arr_calloc = (int*)calloc(5, sizeof(int));

    if (arr_malloc && arr_calloc) {
        for (int i = 0; i < 5; i++) {
            arr_malloc[i] = arr_calloc[i] = i;
        }

        printf("Values from malloc-allocated array: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr_malloc[i]);
        }

        printf("\nValues from calloc-allocated array: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr_calloc[i]);
        }

        free(arr_malloc);
        free(arr_calloc);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}




