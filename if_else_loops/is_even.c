#include <stdio.h>

int main()
{
    int num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int is_even = 0;
    
    if(num % 2 == 0) {
        is_even = 1;
    }
    else {
        is_even = 0;
    }

    if(is_even) {
        printf("%d is even number.\n", num);
    }
    else {
        printf("%d is odd number.\n", num);
    }
    
    return 0;
}
