#include <stdio.h>

int main() {
    printf("Enter the grade: ");
    
    int g = 0;
    
    scanf("%d", &g);

    if(g>=90 && g<=100) {
        printf("Class A.");
    } 
    else if (g>=80 && g<=89) {
        printf("Class B.");
    }
    else if (g>=70 && g<=79) {
        printf("Class C.");
    } 
    else if (g>=60 && g<=69) {
        printf("Class D.");
    } 
    else if (g<=60) {
        printf("Class E.");
    }  

    return 0;
}
