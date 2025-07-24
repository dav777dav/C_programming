#include <stdio.h>

int main () {
    printf("Enter the number: ");

    int num = 0;

    scanf("%d", &num);

    if((num & 1) == 0) {
        printf("The number is even: ");
    } 
    else {
        printf("The number is odd: ");
    }  
           
    return 0;
}    
