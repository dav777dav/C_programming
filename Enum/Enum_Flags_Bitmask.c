#include <stdio.h>

enum Permissions { READ = 1, WRITE = 2, EXECUTE = 4 };

int main() {
	int p = 0;
	printf("Enter a number representing combined permissions: \n");
	scanf("%d", &p);
	
	if (p & READ) {
		printf("READ ");
	}
	if (p & WRITE) {
		printf("WRITE ");
	}
	if (p & EXECUTE) {
		printf("EXECUTE ");
	}
	if (p == 0) {
		printf("None of them.");
	}
	printf("\n");

	return 0;
}
