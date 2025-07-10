#include <stdio.h>

int main() {

    int n = 0;
    scanf("%d", &n);
    printf("%d", 34 ^ (1<<n));

}