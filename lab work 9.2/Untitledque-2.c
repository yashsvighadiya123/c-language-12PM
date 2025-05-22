#include <stdio.h>
#include <string.h>

int main() {
    char email[50], password[50];
    char correctEmail[] = "abcde@gmail.com";
    char correctPassword[] = "123456";

    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login Successful.\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }

    
}

