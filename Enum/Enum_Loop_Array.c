#include <stdio.h>

enum PizzaSize { SMALL, MEDIUM, LARGE, EXTRA_LARGE };

int main() {
	enum PizzaSize ps;
	float price[] = {2.5, 5.5, 10.5, 25.5};
	int size = 0;
	
	printf("Enter size of pizza (SMALL = 0, MEDIUM = 1, LARGE = 2, EXTRA_LARGE = 3): \n");
	scanf("%d", &size);

	ps = size;

	switch (ps) {
		case SMALL:
			printf("Small size of pizza\n");
			break;
		case MEDIUM:
                        printf("Medium size of pizza\n");
                        break;
		case LARGE:
                        printf("Large size of pizza\n");
                        break;
		case EXTRA_LARGE:
                        printf("Extra large size of pizza\n");
                        break;
		default:
			printf("There isn't such thing.\n");
			break;
	}

	for (int i = size; size < 4; ++size) {
		printf("%d = $%f\n", ps, price[i]);
	}

	return 0;
}
