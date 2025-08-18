#include <stdio.h>
#define PI 3.14

struct Circle {
	float radius;
};

int main() {
	struct Circle c;
	printf("Enter the radius: ");
	scanf("%f", &c.radius);

	float circumference = 2 * PI * c.radius;
	float area = PI * c.radius * c.radius;

	printf("This is circumference of circle: %f.\n", circumference);
	printf("This is area of circle: %f.\n", area);
	
	return 0;
}
