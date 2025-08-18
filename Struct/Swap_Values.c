#include <stdio.h>

struct Pair {
	int a;
	int b;
	int temp;
};

int main() {
	struct Pair p;
	printf("Enter the first number: ");
	scanf("%d", &p.a);

	printf("Enter the second number: ");
	scanf("%d", &p.b);

	p.temp = p.a;
	p.a = p.b;
	p.b = p.temp;

	printf("This is swaped numbers: %d %d\n", p.a, p.b);
	return 0;
}
