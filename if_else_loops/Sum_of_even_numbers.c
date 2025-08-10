#include <stdio.h>

int main() {
    int num1 = 0;

    printf("Enter the start of the interval: ");
    scanf("%d", &num1);
    
    int num2 = 0;
    
    printf("Enter the end of the interval: ");
    scanf("%d", &num2);
    
    int sum = 0;

    if (num1 > num2) {
        int num3 = num1;
        num1 = num2;
        num2 = num3;
    }

    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}
