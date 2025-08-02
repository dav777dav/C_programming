#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num = 0;
   
    printf("Enter a number: ");
    scanf("%d", &num);
   
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    }
    else { 
        printf("%d is a complex number.\n", num);
    }
    return 0;
}
