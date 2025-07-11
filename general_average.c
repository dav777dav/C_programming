#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;
    printf("put three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("general: %d\n", a + b + c);
    printf("average: %f", (a+b+c)/3);
    return 0;

}
