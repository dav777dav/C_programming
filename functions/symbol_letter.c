#include <stdio.h>
#include <stdbool.h>

char symbol_is_letter(char sym){
    if (sym >= 'A' && sym <= 'Z' || sym >= 'a' && sym <= 'z') {
        
        return true;

    }
    return false;
}

int main() {
    
    char sym = 0;

    printf("Enter a symbol: ");
    scanf("%c", &sym);
    
    if (symbol_is_letter(sym)){
        printf("You entered %c letter. So it's true.\n", sym);
    }
    else {
        printf("Please, enter a letter. So it's false.\n");
    }
    
    return 0;

}
