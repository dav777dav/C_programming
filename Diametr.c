#include <stdio.h>
#define PI 3.14

int main() {

    int a = 0;
    int b = 0;
    int c = 0;
    printf("Grel yereq hat tiv: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("yndhanur: %d\n", a + b + c);
    printf("mijin: %f", (a+b+c)/3);
    return 0;

}