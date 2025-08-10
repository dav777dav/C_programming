#include <stdio.h>

int main() {
    int num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0 && (num & (num - 1)) == 0) {
        printf("%d is power of two.\n", num);
    }
    else {
        printf("%d isn't power of two.\n", num);
    }
  
    return 0;
}
