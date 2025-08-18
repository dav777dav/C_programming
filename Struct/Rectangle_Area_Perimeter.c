#include <stdio.h>

struct Rectangle {
	int length;
	int width;
};

int main() {
	struct Rectangle r;
	
	printf("Enter length of the rectangle: ");
	scanf("%d", &r.length);
	
	printf("Enter width of the rectangle: ");
     	scanf("%d", &r.width);

	int area = r.length * r.width;
	int perimeter = 2 * (r.length + r.width);
	
	printf("The area of the rectangle is %d.\n", area);
	printf("The perimeter of the rectangle is %d.\n", perimeter);

	return 0;
}
