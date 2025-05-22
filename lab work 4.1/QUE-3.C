#include <stdio.h>
 main() {
    
    float x, y, result1;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    result1 = pow(x + y,2);
    printf("Result of (x + y)^2: %.2f\n", result1);
}

