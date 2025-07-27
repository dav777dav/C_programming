#include <stdio.h>

int main () {
	int num = 10;
	int num1 = 7;

	int *p1 = &num;
	int *p2 = &num1;

	printf("The add is %d.\n", *p1 + *p2);
	printf("The sub is %d.\n", *p1 - *p2);

	return 0;
}
