 #include <stdio.h>
 main() {
    
    printf("Right half triangle pattern:\n");
    for ( i = 1; i <= 5; i++) {
        int num = 41;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    printf("\n");

    
    printf("Floyd's triangle pattern:\n");
    int number = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    
}
