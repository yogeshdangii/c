#include <stdio.h>

void generateparenthesis(char arr[], int left, int right, int n, int index)
{
    if (left == 0 && right == 0)
    {
        printf("%s\n", arr);
        return;
    }
    if (left > 0)
    {
        arr[index] = '[';
        generateparenthesis(arr, left - 1, right, n, index + 1);
    }
    if (right > left)
    {
        arr[index] = ']';
        generateparenthesis(arr, left, right - 1, n, index + 1);
    }
}

void generateparenthesis2(int n)
{
    char arr[2 * n + 1];
    arr[2 * n] = '\0';
    generateparenthesis(arr, n, n, n, 0);
}
int main()
{
    printf("enter the number of pairs of parenthesis");
    int n;
    scanf("%d", &n);

    generateparenthesis2(n);
    return 0;
}