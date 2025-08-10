#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    int is_positive_and_even = 0;
    
    if((num > 0) && (num % 2 == 0)) {
        is_positive_and_even = 1;
    }
    else{
        is_positive_and_even = 0;
    }
    
    if(is_positive_and_even) {
        printf("%d is positive and even.\n", num);
    }
    else {
        printf("%d isn't both of them.\n", num);
    }

    return 0;
}
