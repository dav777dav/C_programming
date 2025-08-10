#include <stdio.h>

int main() {
    int num = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not both of them.\n", num);
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is composite number.\n", num);
            return 0;
        }
    }

    printf("%d is prime number.\n", num);
    
    return 0;
}
