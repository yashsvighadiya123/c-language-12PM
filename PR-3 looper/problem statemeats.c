#include <stdio.h>

int main() {
    char ch = 'a';  
    
    do {
        printf("%c ", ch);
        ch += 4;  
    } while (ch <= 'z');  
    
    return 0;
}

