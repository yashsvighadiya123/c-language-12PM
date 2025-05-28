#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
/ main() {
    int x = 2, y = 5;
    printf("Before swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    swap(&x, &y);
    printf("After swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    
} 
