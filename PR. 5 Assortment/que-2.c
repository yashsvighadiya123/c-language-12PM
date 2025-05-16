#include <stdio.h>

int main() {
    int a[3][3] = {
        {4, 18, 9},
        {2, 11, 21},
        {10, 5, 16}
    };
    int i, j;
    int max = a[0][0]; 

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] > max) {
                max = a[i][j];  
            }
        }
    }

    
    printf(" %d\n", max);

}

