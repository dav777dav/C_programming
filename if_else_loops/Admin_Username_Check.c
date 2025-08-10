#include <stdio.h>
#include <string.h>

int main() {
    char username[10];

    printf("Enter the username: ");
    scanf("%s", username);
    
    int is_admin = 0;

    if(strcmp(username, "admin") == 0) {
        is_admin = 1;
    } else {
        is_admin = 0;
    }

    if(is_admin) {
        printf("Welcome, admin!\n");
    } else {
        printf("You aren't admin!\n");
    }

    return 0;
}
