#include<stdio.h>

int main(){
    int num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int num1 = num;
    int rem = 0;
    int result = 0;
    
    while(num1 != 0) {
        rem = num1 % 10;
        result = result * 10 + rem;
        num1 /= 10;
    }
    
    if(result == num) {
        printf("%d is palindrome.\n", num);
    }
    else {
        printf("%d isn't palindrome.\n", num);
    }
    
    return 0;
}

