#include <stdio.h>
#include <string.h>

char* strcat(char* dest, const char* src) {
	int x = 0;
	int y = 0;

	while (dest[x] != '\0') {
		++x;
	}
	while ((dest[x] = src[y]) != '\0') {
		++x;
		++y;
	}

	return dest; 
}

int main() {
	char str[15] = "Hello ";
	char str1[15] = "Picsart!";
	
	strcat(str, str1);

	printf("%s\n", str);
	return 0;
}
