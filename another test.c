#include <stdio.h>

void generateParenthesis(int n, int open, int close, char *current, int index) {
    if (index == 2 * n) {
        current[index] = '\0';
        printf("%s\n", current);
        return;
    }

    if (open < n) {
        current[index] = '(';
        generateParenthesis(n, open + 1, close, current, index + 1);
    }

    if (close < open) {
        current[index] = ')';
        generateParenthesis(n, open, close + 1, current, index + 1);
    }
}

int main() {
    int n;

    printf("Enter the number of pairs: ");
    scanf("%d", &n);

    char result[2 * n];  // Array to store the generated combinations
    generateParenthesis(n, 0, 0, result, 0);

    return 0;
}
s