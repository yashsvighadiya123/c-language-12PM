#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    
    printf("Enter a number: ");
    scanf("%d", &num);


    lastDigit = num % 10;


    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

printf(first digit && last digit);


    


    return 0;
}

