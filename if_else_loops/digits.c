#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num >= 12) {
        printf("Digit is ");
        while (num != 0) {
            printf("%d", num % 10);
            num /= 10;
        }
    }
    else {
        printf("It is a number less than 12.\n");
    }
    
    return 0;
}
