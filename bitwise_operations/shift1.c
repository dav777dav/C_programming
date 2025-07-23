#include <stdio.h>

int main(){
	int number =0; 
	int n = 0;

	printf("Enter a number: ");
	scanf("%d %d", &number, &n);

	number = number|(1<<n);
	printf("Result is %d\n", number);

	return 0;
}
