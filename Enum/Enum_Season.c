#include <stdio.h>

enum Season { WINTER, SPRING, SUMMER, FALL };

int main() {
	enum Season s;
	
	int month = 0;
	printf("Enter a month number (1-12): ");
	scanf("%d", &month);

	if (month == 12 || month == 1 || month == 2) {
		if (month == 12) {
			printf("December → ");
		}
		if (month == 1) {
			printf("January → ");
		}
		if (month == 2) {
			printf("February → ");
		}
		s = WINTER;
	}
	else if (month >= 3 && month <= 5) {
		if (month == 3) {
			printf("March → ");
		}
		if (month == 4) {
			printf("April → ");
		}
		if (month == 5) {
			printf("May → ");
		}
		s = SPRING;
	}
	else if (month >= 6 && month <= 8) {
		if (month == 6) {
			printf("June → ");
		}
		if (month == 7) {
			printf("July → ");	
		}
		if (month == 8) {
			printf("August → ");
		}
		s = SUMMER;
	}
	else if (month >= 9 && month <= 11) {
		if (month == 9) {
			printf("September → ");
		}
		if (month == 10) {
			printf("October → ");
		}
		if (month == 11) {
			printf("November → ");
		}
		s = FALL;
	}
	else {
		printf("Please, enter only 1-12 numbers to check a month of a season.\n");
		return 0;
	}
	
	switch (s) {
		case WINTER:
			printf("Winter\n");
			break;
		case SPRING:
			printf("Spring\n");
			break;
		case SUMMER:
			printf("Summer\n");
			break;
		case FALL:
			printf("Fall\n");
			break;
	}

	return 0;
}
