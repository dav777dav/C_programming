#include <stdio.h>

int main() {

    char dig[50];
   
    printf("Enter only digits: ");
    
    for(int i = 0; i < 1; i++) {   
        scanf("%c", &dig[i]);        

        if(dig[i] >= '0' && dig[i] <= '9') {
            printf("Well, %c is digit.\n", dig[i]);
        }
        else {
            printf("No, %c isn't digit!\n", dig[i]);
        }
    }   

    return 0;

}
