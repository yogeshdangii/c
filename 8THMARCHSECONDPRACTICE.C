#include <stdio.h>
#include <math.h>

#define square(x) ((x)*(x))

int main() {
    printf("the square of 5 is %d and the cube of 5 is %d\n", square(5), (int)pow(5, 3));
    return 0;
}
