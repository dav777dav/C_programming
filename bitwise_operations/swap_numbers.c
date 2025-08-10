#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d\n", a, b);
    return 0;
}
