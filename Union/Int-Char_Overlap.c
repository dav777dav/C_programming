#include <stdio.h>

union Data {
	int intValue;
	char charValue;
} d;

int main() {
	printf("Enter value of integer: \n");
	scanf("%d", &d.intValue);
	
	printf("The first bite of int is %d.\n", d.charValue);
	return 0;
}
