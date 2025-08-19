#include <stdio.h>

struct Rational {
	int numerator;
	int denominator;
};

int main() {
	struct Rational r1;
	printf("Enter numerator and denominator of the first rational numbers: \n");
	scanf("%d", &r1.numerator);
	scanf("%d", &r1.denominator);

	struct Rational r2;
	printf("Enter numerator and denominator of the second rational numbers: \n");
	scanf("%d", &r2.numerator);
	scanf("%d", &r2.denominator);

	int sum = r1.numerator / r1.denominator + r2.numerator / r2.denominator;
	int product = r1.numerator / r1.denominator * r2.numerator / r2.denominator;

	printf("%d is sum of Rational number.\n", sum);
	printf("%d is product of Rational number.\n", product);

	return 0;
}
