#include <stdio.h>

struct Person {
	float weight;
	float height;
};

int main() {
	struct Person p;

	printf("Enter the person's weight: ");
	scanf("%f", &p.weight);

	printf("Enter the person's height: ");
	scanf("%f", &p.height);

	float bmi = p.weight / (p.height * p.height);

	if (bmi < 18.5) {
		printf("Your BMI is %f, so you are Underweight.\n", bmi);
	}
	else if (bmi <= 24.9) {
		printf("Your BMI is %f, so you are Normal.\n", bmi);
	}
	else {
		printf("Your BMI is %f, so you are Overweight.\n", bmi);
	}
	return 0;
}
