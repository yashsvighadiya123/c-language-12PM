#include <stdio.h>
 main() {
    int rows, i, j, number = 11;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Floyd's triangle pattern:\n");

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    
} 
