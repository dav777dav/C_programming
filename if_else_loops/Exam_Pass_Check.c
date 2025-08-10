#include <stdio.h>

int main() {
    int score = 0;

    printf("Enter your exam score: ");
    scanf("%d", &score);
    
    int passed = 0;

    if (score >= 50) {
        passed = 1;
    } 
    else {
        passed = 0;
    }

    if (passed) {
        printf("You passed the exam.\n");
    } else {
        printf("You didn't pass the exam.\n");
    }

    return 0;
}
