#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius = 0;

    printf("Enter the celsius number: ");
    scanf("%f", &celsius);

    float f = celsius_to_fahrenheit(celsius);

    printf("The fahrenheit is %f.\n", f);

    return 0; 
}
