#include <stdio.h>

union Measurement {
    int lenght;
    float weight;
} m;

int main() {
    char c = 0;
    printf("Enter lenght(L) or weight(W): \n");
    scanf("%c", &c);

    if (c == 'L') {
        printf("So, enter lenght: \n");
        scanf("%d", &m.lenght);
        printf("Your entered lenght is %d.\n", m.lenght);
    }
    else if (c == 'W') {
        printf("So, enter weight: \n");
        scanf("%f", &m.weight);
        printf("Your entered weight is %f.\n", m.weight);
    }
    else {
        printf("Please, enter only 'L'(lenght) or 'W'(weight).\n");
    }
    return 0;
}
