#include<stdio.h>

main() {
    
    float x1, y1, result1;
    printf("Enter the value of x for (x + y)^2: ");
    scanf("%f", &x1);
    printf("Enter the value of y for (x + y)^2: ");
    scanf("%f", &y1);
    result1 = pow(x1 + y1, 2);
    printf("Result of (%.2f + %.2f)^2: %.2f\n", x1, y1, result1);

    
}
