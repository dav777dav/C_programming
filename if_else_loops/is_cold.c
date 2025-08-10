#include <stdio.h>

int main()
{
    int temp = 0;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);

    int is_cold = 0;
    
    if(temp < 15) {
        is_cold = 1;
    }
    else {
        is_cold = 0;
    }

    if(is_cold) {
        printf("It is cold weather.\n");
    }
    else {
        printf("It isn't cold weather.\n");
    }

    return 0;
}
