#include<stdio.h>
 main() {
    int rows, cols, i, j, sum = 0;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; 
        }
    }


    printf("\nArray elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nRow sums:\n");
    for (i = 0; i < rows; i++) {
        int rowSum = 0;
        for (j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }


    printf("\nColumn sums:\n");
    for (j = 0; j < cols; j++) {
        int colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }
    
    
    printf("\nSum of all elements: %d\n", sum);

}
