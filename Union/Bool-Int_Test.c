#include <stdio.h>

union Flag {
    int number;
    char flag;
} f;

int main() {
    printf("Enter a number to see the ASCII of the first byte: \n");
    scanf("%d", &f.number);

    printf("The ASCII of the first byte is %c.\n", f.flag);
    return 0;
}
