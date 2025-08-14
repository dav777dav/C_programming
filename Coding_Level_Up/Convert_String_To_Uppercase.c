#include <stdio.h>

int main() {

  int size = 5;
  char arr[size];

  printf("Enter a string: ");

  for(int i = 0; i < size; ++i) {
    
    scanf("%c", &arr[i]);

    if(arr[i] >= 'a' && arr[i] <= 'z') {
      
      arr[i] -= 32;
      printf("%c", arr[i]);
      
    }
  } 
  printf("\n");

  return 0;

}
