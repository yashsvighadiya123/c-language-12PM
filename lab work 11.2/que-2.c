#include <stdio.h>
#include <stdlib.h>
 main() {
    int size, i;
    int *arr, *ptr, *end;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
        arr[i] *= arr[i]; 
    }

    printf("Reversed array elements:\n");
    ptr = arr + size - 1; 
    end = arr - 1;

    while (ptr > end) {
        printf("%d", *ptr);
        if (ptr != arr) {
            printf(", ");
        }
        ptr--;
    }
    printf("\n");
    free(arr);
}
