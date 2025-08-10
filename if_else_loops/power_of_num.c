#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int deg = 0;

    printf("Enter a degree: ");
    scanf("%d", &deg);
    
    int result = 1;

    if(num > 0 && deg > 0) {
        if (deg == 0) {
            result = 1;
        } 
        else if (deg == 1) {
            result = num; 
        } 
        else {
            for (int i = 1; i <= deg; i++) {
                result *= num;
            }
        }
        
        printf("The %d-th power of %d is %d.\n", deg, num, result);
    }
    else {
        printf("Please, enter positive number or degree");
    }

    return 0;
}
