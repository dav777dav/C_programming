#include <stdio.h>

struct People {
	int age;
	float height;
};

int main() {
	struct People p1;
	printf("Enter the first person's age and height: ");
	scanf("%d", &p1.age);
	scanf("%f", &p1.height);

	struct People p2;
	printf("Enter the second person's age and height: ");
	scanf("%d", &p2.age);
	scanf("%f", &p2.height);

	if (p1.age > p2.age) {
		printf("The first person is older than the second person.\n");
	}
	else if (p1.age == p2.age) {
		printf("They are both the same age.\n");
	}
	else {
		printf("The second person is older than the first person.\n");
	}

	if (p1.height > p2.height) {
                printf("The first person is taller than the second person.\n");
        }
        else if (p1.height == p2.height) {
                printf("They are both the same height.\n");
        }
       	else {
      	        printf("The second person is taller than the first person.\n");
        }
	return 0;
}
