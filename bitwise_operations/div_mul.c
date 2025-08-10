#include <stdio.h>

int main() {
    int num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d is multiplied by 2: %d\n", num, num << 1);
    printf("%d is divided by 2: %d\n", num, num >> 1);

    return 0;
}
