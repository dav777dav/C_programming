#include <stdio.h>

enum PizzaSize { SMALL, MEDIUM, LARGE, EXTRA_LARGE };

int main() {
    	int size = 0;
	float price[] = {2.5, 5.5, 15.5, 30.5};

	printf("Enter number that which pizza size you prefer(0 = SMALL, 1 = MEDIUM, 2 = LARGE, 3 = EXTRA_LARGE): ");
    	while (1) {
        	scanf("%d", &size);

        	switch(size) {
        	    case SMALL:
        	        printf("Small pizza size = $%f\n", price[size]);
        	        break;
        	    case MEDIUM:
        	        printf("Medium pizza size = $%f\n", price[size]);
        	        break;
        	    case LARGE:
        	        printf("Large pizza size = $%f\n", price[size]);
        	        break;
        	    case EXTRA_LARGE:
        	        printf("Extra large pizza size = $%f\n", price[size]);
        	        break;
        	    default:
        	        printf("Please, enter 0-1 number to choose pizza size.\n");
        	        continue;
        	}
        	return 0;
    	}

	return 0;
}

