#include <stdio.h>

struct Point {
	float x;
	float y;
};

int main() {
	struct Point p1;
	printf("Enter x and y of the first point: ");
	scanf("%f", &p1.x);
	scanf("%f", &p1.y);

	struct Point p2;
	printf("Enter x and y of the second point: ");
	scanf("%f", &p2.x);
	scanf("%f", &p2.y);

	float result = ((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y));
	printf("This is Euclidean distance: %f.\n", result);
	return 0;
}
