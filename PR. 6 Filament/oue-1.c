#include <stdio.h>
#include <string.h>


int isPalindrome(char str[]) {
    int length = 0;
    int i, j;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}

