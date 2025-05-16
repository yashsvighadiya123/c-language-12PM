#include <stdio.h>
 main() {
    int rows = 5;
    
    for ( i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
   
}
