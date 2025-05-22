#include <stdio.h>
#include <math.h>

int main() {
    float x, y, result;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of y: ");
    scanf("%f", &y);

    result = pow(x + y, 2);

    printf("(x + y)^2 = %.2f\n", result);

    return 0;
}
