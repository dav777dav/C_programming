#include <stdio.h>

int main() {
    printf("Enter a symbol: ");
    
    char sym = 0;
    
    scanf("%c", &sym);

    if (sym >= '0' & sym <= '9') {
        printf("true\n");
    } 
    else {
        printf("false\n");
    }

    return 0;
}
