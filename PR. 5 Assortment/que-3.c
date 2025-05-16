#include <stdio.h>

int main() {
    int a[3][3], transpose[3][3];

    
    printf("Enter 3x3 matrix elements:\n"); 
	int i;
    
for (i = 0; i <=3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[i][j] = a[j][i];
        }
    }

    
   printf("Transpose of the matrix is:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


}

