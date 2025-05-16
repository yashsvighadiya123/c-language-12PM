#include <stdio.h>
 main() {
    int a[5] = {-99,89,-6,78,-54}; 
    int i;
 
    for (i = 0; i < 5; i++) {
        if (a[i] < 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    
}

