#include <stdio.h>

union Currency {
    float usd;
    float eur;
} c;

int main() {
    printf("Enter Dollar value: \n");
    scanf("%f", &c.usd);
    printf("$%f = €%f\n", c.usd, c.eur);

    printf("Enter Euro value: \n");
    scanf("%f", &c.eur);
    printf("€%f = $%f\n", c.eur, c.usd);

    return 0;
}
