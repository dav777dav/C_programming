#include <stdio.h>

enum Season { WINTER, SPRING, SUMMER, FALL };

int main() {
	enum Season s;

	int month = 0;
	printf("Enter a month number (1-12): \n");
	scanf("%d", &month);

	if (month == 12 || month == 1 || month == 2) {
		if (month == 12) {
			printf("December -> ");
		}
		if (month == 1) {
                        printf("January -> ");
                }
		if (month == 2) {
                        printf("February -> ");
                }

		s = WINTER;
	}
	else if (month >= 3 && month <= 5) {
                if (month == 3) {
                        printf("March -> ");
                }
                if (month == 4) {
                        printf("April -> ");
                }
                if (month == 5) {
                        printf("May -> ");
                }

                s = SPRING;
        }
	else if (month >= 6 && month <= 8) {
                if (month == 6) {
                        printf("June -> ");
                }
                if (month == 7) {
                        printf("July -> ");
                }
                if (month == 8) {
                        printf("August -> ");
                }

                s = SUMMER;
        }
	else if (month >= 9 && month <= 11) {
                if (month == 9) {
                        printf("September -> ");
                }
                if (month == 10) {
                        printf("Oc7tober -> ");
                }
                if (month == 11) {
                        printf("November -> ");
                }

                s = FALL;
        }
	else {
		printf("Please, enter only 1-12 numbers for check the month.\n");
		return 0;
	}

	if (s == WINTER) {
		printf("WINTER\n");
	}
	else if (s == SPRING) {
		printf("SPRING\n");
	}
	else if (s == SUMMER) {
                printf("SUMMER\n");
        }
	else if (s == FALL) {
                printf("FALL\n");
        }
	else {
		printf("\n");
	}

	return 0;
}
