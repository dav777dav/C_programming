#include <stdio.h>

union Number {
	int intValue;
	float floatValue;
} n;

int main() {
	printf("Enter value of float: \n");
	scanf("%f", &n.floatValue);
	printf("Value of int = %d, Value of float = %f.\n", n.intValue, n.floatValue);

	return 0;
}
