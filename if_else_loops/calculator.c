#include <stdio.h>

int main() {
    int num = 0;
    int num1 = 0;
    char opcode = 0;
    
    printf("Enter an arithmetic operation or 'Q' to quit.\n");
    scanf("%c", &opcode);
    
    while(opcode != 'Q') {
        printf("Enter the first number: ");
        scanf("%d", &num);
        
        printf("Enter the second number: ");
        scanf("%d", &num1);
        
        switch (opcode) {
            case '+':
                printf("The result is %d.\n", num + num1);
                break;
            case '-':
                printf("The result is %d.\n", num - num1);
                break;
            case '*':
                printf("The result is %d.\n", num * num1);
                break;
            case '/':
                if (num1 != 0) {
                    printf("The result is %d.\n", num / num1);
                } else {
                    printf("You can't divide %d by %d.\n", num, num1);
                }
                break;
            default:
                printf("You entered invalid operator\n");
        }
        printf("Enter an arithmetic operation or 'Q' to quit.\n");
        scanf(" %c", &opcode);
    }
    
    return 0;
}
