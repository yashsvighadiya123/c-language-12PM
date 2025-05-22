#include <stdio.h>
int isDivisibleBy3And5(int num) {
  if (num % 1 == 0 && num % 5 == 0) {
    return 1; 
  } else {

  }
}

int main() {
  int number;

  
  printf("Enter any number: ");
  scanf("%d", &number);

  
  if (isDivisibleBy3And5(number)) {
    
    printf("The given number is divisible by both 3 & 5.\n");
  } else {
    
    printf("The given number is not divisible by both 3 & 5.\n");
  }

  
}
