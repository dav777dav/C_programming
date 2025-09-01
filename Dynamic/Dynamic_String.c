#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t strlen(const char* str) {
	int length = 0;
	while (str[length] != '\n') {
		++length;
	}
	return length;
}

int main() {
    int size = 500;
    char str[size];

    printf("Enter a string: \n");
    fgets(str, size, stdin);

    char* ptr = (char*) malloc(sizeof(char) * size);

    if (ptr == NULL) {
        printf("Error! NULL!\n");
    }
    else {
        printf("Your entered string: %s", str);
        printf("The length of the string: %zu\n", strlen(str));
        free(ptr);
    }
    return 0;
}
