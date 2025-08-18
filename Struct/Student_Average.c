#include <stdio.h>

struct Student {
	float mathGrade;
	float physicsGrade;
	float chemistryGrade;
};

int main() {
	struct Student s;

	printf("Enter the grade of math: ");
	scanf("%f", &s.mathGrade);
	
	printf("Enter the grade of physics: ");
	scanf("%f", &s.physicsGrade);

	printf("Enter the grade of chemistry: ");
	scanf("%f", &s.chemistryGrade);

	float average = (s.mathGrade + s.physicsGrade + s.chemistryGrade) / 3;
	
	printf("The average of your grades is %f.\n", average);

	return 0;
}
