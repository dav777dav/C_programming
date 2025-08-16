#include <stdio.h>
#include <string.h>

size_t strlen(const char* str) {
	int length = 0;
	while (str[length] != '\0') {
		++length;
	}
	return length;
}

int main() {
	char str[] = "Hello World!";
	printf("The length of '%s' is %zu\n", str, strlen(str));
	return 0;
}
