#include <stdio.h>

int main() {
    int num = 10;
    float f = 3.14;
    char c = 'D';
    
    int *p1 = &num;
    float *p2 = &f;
    char *p3 = &c;
    
    printf("%p\n", p1);
    printf("%p\n", p2);
    printf("%p\n", p3);
    
    return 0;
}
