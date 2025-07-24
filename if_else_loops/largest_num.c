#include <stdio.h>

int main(){
    printf("Enter the firs number: ");
    
	int x = 0;
	
	scanf("%d" , &x);

	printf("Enter the second number: ");
	
	int y = 0;
	
	scanf("%d" , &y);

	printf("Enter the third number: ");
	
	int z = 0;
	
	scanf("%d" , &z);

	int max = x;

  if (y > max) {
      max = y;
  }
  if (z > max) {
      max = z;
  }

	printf("The largest number is %d.\n", max);

	return 0;
}
