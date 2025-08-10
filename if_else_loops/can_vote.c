#include <stdio.h>

int main() {
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    int can_vote = 0;

    if (age >= 18) {
        can_vote = 1;
    } else {
        can_vote = 0;
    }

    if (can_vote) {
        printf("You are old to vote.\n");
    } else {
        printf("You aren't old to vote.\n");
    }

    return 0;
}
