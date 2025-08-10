#include <stdio.h>

int main() {
	int num1 = 0;
	
    printf("Enter first number: ");
    scanf("%d", &num1);

    int num2 = 0;
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int sum  = 0;

    sum = num1 + num2;

    printf("the result of sum: %d\n", sum);

    return 0;
}
