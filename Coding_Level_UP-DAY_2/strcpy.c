#include <stdio.h>
#include <string.h>

char* strcpy(char* dest, const char* src) {
	int i = 0;
	while ((dest[i] = src[i]) != '\0') {
		++i;
	}
	return dest;
}

int main() {
	char src[] = "Hello Dave!";
	char dest[] = "Hello Poghos!";

	printf("Before coping: \n");
	printf("%s\n", src);
	printf("%s\n", dest);

	strcpy(dest, src);

	printf("After coping: \n");
	printf("%s\n", src);
	printf("%s\n", dest);
	
	return 0;
}
