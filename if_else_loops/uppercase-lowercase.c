#include <stdio.h>

int main() {
    printf("Enter an uppercase letter: ");

    char sym = 0;
  
    scanf("%c", &sym);
    
    if(sym >= 'A' && sym <= 'Z') {
        printf("Lowercase: %c\n", sym + 32);
    } 
    else {
        printf("This is not an uppercase letter!\n");
    }
    return 0;
}
