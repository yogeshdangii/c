
#include <stdio.h>

void generateParenthesis(char str[], int left, int right, int n, int index) {
    
    if (left == 0 && right == 0) {
        printf("%s\n", str);
        return;
    }

    // Add left parenthesis if there are remaining left parentheses
    if (left > 0) {
        str[index] = '(';
        generateParenthesis(str, left - 1, right, n, index + 1);
    }

    // Add right parenthesis if there are more remaining right parentheses than left parentheses
    if (right > left) {
        str[index] = ')';
        generateParenthesis(str, left, right - 1, n, index + 1);
    }
}

void generateAllParenthesis(int n) {
    // Create a character array to store the combinations
    char str[2 * n + 1];
    str[2 * n] = '\0';  // Null-terminate the string

    // Start the recursive generation with n left and n right parentheses
    generateParenthesis(str, n, n, n, 0);
}

int main() {
    int n ;
    printf("Enter the number of pairs of paranthesis");
    scanf("%d", &n);

    generateAllParenthesis(n);

    return 0;
}




