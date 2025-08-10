#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter the first number: ");
    scanf("%d", &num);

    if(num >= 0) {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }
    else {
        printf("Please, enter positive number!\n");
    }

    return 0;
}
