 #include <stdio.h>
 main() {
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 3 || i == 5) {
                if (j == 1 || (i == 3 && j == 5)) {
                    printf("*");
                } else if (i != 3)
                    printf("*");
                else
                    printf(" ");
            } else {
                if (j == 1 || j == 5) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
} 

