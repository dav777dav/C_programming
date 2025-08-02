#include <stdio.h>

int power(int a, int b) {
    
    int res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}


int main() {
    int a = 0;
    int b = 0;
   
    printf("Enter the number: ");
    scanf("%d", &a);
    
    printf("Enter the power: ");
    scanf("%d", &b);
    
    printf("The %d-th power of %d is %d.\n", b, a, power(a, b));
    
    return 0;
}
