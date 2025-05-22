#include <stdio.h>

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    
    int result = cube(number);

    
    printf("Cube is: %d\n", result);

    
}
