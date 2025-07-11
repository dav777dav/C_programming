#include <stdio.h>

int main() {

    float c = 0;
    printf("put Celsius: ");
    scanf("%f", &c);
    printf("output of Fahrenheit: %f\n", (c*9/5)+32);
    return 0;

}
