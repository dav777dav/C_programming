#include <stdio.h>

int main() {
    char c1 = 0;
    char c2 = 0;
    short sh = 0;
    int num = 0;

    printf("Enter the first char: ");
    scanf("%c", &c1);
    
    printf("Enter the second char: ");
    scanf("%c\n", &c2);
    
    printf("Enter the short: ");
    scanf("%hd\n", &sh);

    char *p = (char*)&num;
    *p = c1;
    *(p + 1) = c2;
    *(short*)(p + 2) = sh;

    printf("The result is %p.\n", num);
    
    return 0;
}
