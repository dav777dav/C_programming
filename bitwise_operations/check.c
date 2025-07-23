#include <stdio.h>

int main(){
	int num = 0;
	int n = 0;

	printf("Check a number value: ");
	scanf("%d %d", &num, &n);

	int bit = num&(1>>n);
	printf("%d-th value is %d.\n", n, bit);

	return 0;
}
