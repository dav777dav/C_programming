#include <stdio.h>

union Value {
	float floatValue;
	int intValue;
} v;

int main() {
	printf("Enter value of float: \n");
	scanf("%f", &v.floatValue);

	printf("The representation of int is %d.\n", v.intValue);
	return 0;	
}
