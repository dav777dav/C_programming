#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
	enum TrafficLight tl;

	int signal = 0;
	printf("Enter the signal (RED = 0, YELLOW = 1, GREEN = 2): \n");
	scanf("%d", &signal);

	tl = signal;

	switch (tl) {
		case RED:
			printf("Stop\n");
			break;
		case YELLOW:
                        printf("Ready\n");
                        break;
		case GREEN:
                        printf("Go\n");
                        break;
		default:
			printf("Don't honk for no reason!!\n");
			break;
	}
	return 0;
}
