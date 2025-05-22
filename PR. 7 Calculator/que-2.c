#include <stdio.h>
//#include <stdlib.h>

int main() {
    int choice, num1, num2;
    char continue_calc;

    do {
        printf("Enter your choice:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %\n");
        printf("Press 0 for the exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Addition of %d and %d is %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Subtraction of %d and %d is %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Multiplication of %d and %d is %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                if (num2 == 0) {
                    printf("Division by zero is not allowed.\n");
                } else {
                    printf("Division of %d and %d is %d\n", num1, num2, num1 / num2);
                }
                break;
            case 5:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                if (num2 == 0) {
                    printf("Modulo by zero is not allowed.\n");
                } else {
                    printf("Modulo of %d and %d is %d\n", num1, num2, num1 % num2);
                }
                break;
            case 0:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_calc); 
    } while (continue_calc == 'y' || continue_calc == 'Y');

    return 0;
}
