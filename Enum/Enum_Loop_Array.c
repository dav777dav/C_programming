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
			printf("You entered small size of pizza");
			break;
		case MEDIUM:
            printf("You entered medium size of pizza");
            break;
		case LARGE:
            printf("You entered large size of pizza");
            break;
		case EXTRA_LARGE:
            printf("You entered extra large size of pizza");
            break;
		default:
			printf("There isn't such thing.\n");
			return 0;
	}

	for (int i = size; size < 4; ++size) {
		printf(" = $%f\n", price[i]);
		break;
	}
	
	return 0;
}
