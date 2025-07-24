#include <stdio.h>

int main(){
	printf("Swap the numbers: ");
	
	int a = 0;
	int b =0;
    
    	scanf("%d %d", &a, &b);
    	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	printf("Swaped numbers: %d, %d\n", a, b);
    
	return 0;
}
