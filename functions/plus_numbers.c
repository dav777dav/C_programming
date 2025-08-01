#include <stdio.h>

int sum_of_digits(int num) {
	int sum = 0;
	
	if (num < 0)num = -num;
	while (num > 0) {
		sum+=num%10;
		num/=10;
	}

	return sum;

}

int main() { 

	int num = 45;
	int ret = sum_of_digits(num);
	printf("%d\n", ret);

	return 0;
}
