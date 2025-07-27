#include <stdio.h>

int main() {
    int num = 1;
    char *ptr = (char*)&num;

    if (*ptr == 1){
        printf("The computer is little endian.\n");
    }
    else{
        printf("The computer is big endian.\n");
    }
    
    return 0;
}
