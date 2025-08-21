#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
	enum TrafficLight tf;
	
	int signal = 0;
	
	while (1) {
		printf("Enter a signal(RED = 0, YELLOW = 1, GREEN = 2): ");
		scanf("%d", &signal);
	
		tf = signal;
	
		switch (tf) {
			case RED:
				printf("RED = STOP!\n");
				break;
			case YELLOW:
        	                printf("YELLOW = READY!\n");
        	                break;
			case GREEN:
        	                printf("GREEN = GO!\n");
        	                break;
			default:
				printf("Please, enter only signal!\n");
				continue;
				
		}
		return 0;
	}

	return 0;
}
