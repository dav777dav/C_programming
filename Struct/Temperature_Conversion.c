#include <stdio.h>

struct Temperature {
	float celsius;
	float fahrenheit;
};

int main() {
	struct Temperature t;

	printf("Enter the celsius temperature: ");
	scanf("%f", &t.celsius);

	t.fahrenheit = (t.celsius * 9 / 5) + 32;
	
	printf("%fF° = %fC°\n", t.fahrenheit, t.celsius);
	return 0;
}
