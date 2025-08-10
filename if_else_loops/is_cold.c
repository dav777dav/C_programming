#include <stdio.h>

int main()
{
    int temp = 0;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);
    
    if(temp < 15) {
        printf("It is cold weather.\n");
    }
    else {
        printf("It isn't cold weather.\n");
    }

    return 0;
}
