#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    int i;
    for ( i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    int result = sumArray(arr, size);
    printf("The sum of an Array: %d\n", result);
    
}
