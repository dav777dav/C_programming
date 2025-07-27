#include <stdio.h>

int main() {
    int num = 7;
    int *ptr = &num;
    
    printf("The value is %d.\n", *ptr);
  
    return 0;
}
