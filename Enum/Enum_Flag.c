#include <stdio.h>

enum Permissions { READ = 1, WRITE = 2, EXECUTE = 4 };

int main() {
	enum Permissions p;

	int n = 0;
	printf("Enter a number representing combined permissions: ");
	scanf("%d", &n);

	p = n;

	if (p & READ) {
        	printf("Read");
    	}
    	if (p & WRITE) {
    	    	printf("Write");
    	}
    	if (p & EXECUTE) {
    		printf("Execute");
    	}
	if (p == 0) {
		printf("None of them!");
	}
	printf("\n");

	return 0;
}
