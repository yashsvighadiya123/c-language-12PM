#include <stdio.h>

int main() {
    int score;
    char grade;

    
    printf("Enter your score out of 100: ");
    scanf("%d", &score);

    
    if (score < 0 || score > 100) {
n        printf(" enter a value between 0 and 100.\n");
        return 1;
    }

    
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    
    printf("Your grade is: %c\n", grade);

    return 0;
    

int main() {
    int score;
    char grade;

    
    printf("Enter the score (0 to 100): ");
    scanf("%d", &score);

    
    if (score < 0 , score > 100) {
        printf(" enter a value between 0 and 100.\n");
        
    }

    
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    
    printf("Score: %d => Grade: %c\n", score, grade);

    
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed but could do better.\n");
            break;
        case 'E':
            printf("Needs improvement.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Unexpected grade.\n");
    }

    return 0;
}



int main() {
    int score;
    char grade;

    
    printf("Enter the score (0 to 100): ");
    scanf("%d", &score);

    
    if (score < 0 , score > 100) {
        printf(" enter a value between 0 and 100.\n");
        
    }

    
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    
    printf("Score: %d => Grade: %c\n", score, grade);

    
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed but could do better.\n");
            break;
        case 'E':
            printf("Needs improvement.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Unexpected grade.\n");
    }

    return 0;
}


p.2
    

int main() {
    int score;
    char grade;

    
    printf("Enter the score (0 to 100): ");
    scanf("%d", &score);

    
    if (score < 0 || score > 100) {
        printf(" enter a value between 0 and 100.\n");
        
    }

    
    
    printf("Score: %d => Grade: %c\n", score, grade);

    
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed but could do better.\n");
            break;
        case 'E':
            printf("Needs improvement.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Unexpected grade.\n");
    }

    
    

    return 0;
}

}
