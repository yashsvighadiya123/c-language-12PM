#include <stdio.h>
 main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    lastDigit = num % 10;

    
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit: %d\n", sum);


}
