#include <stdio.h>
 main() {
    int size, i;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("Square of each element:\n");
    for (i = 0; i < size; i++) {
        int *ptr = &arr[i]; 
        printf("%d ", (*ptr) * (*ptr)); 
    }
    printf("\n");

}
