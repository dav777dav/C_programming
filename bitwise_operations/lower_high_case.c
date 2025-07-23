#include <stdio.h>

int main(){
  char letter = 0;
  printf("Enter a letter: ");
  scanf("%c", &letter);
  letter^=32;
  printf("The letter is: %c\n", letter);
  return 0;
}
