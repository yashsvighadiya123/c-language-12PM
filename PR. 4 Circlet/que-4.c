#include <stdio.h>
 main() {
    int rows = 5;
    
    
    for (i = rows; i >= 1; i--) {
      for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }
    
}
