#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char inputString[100]; 

    printf("Enter any string: ");
    scanf("%s", inputString);

    int length = stringLength(inputString);

    printf("Length is: %d\n", length);
}

