#include <stdio.h>

int main(){
	printf("Swap the numbers: ");
	
	int num = 0;
	int i = 0;
	int j =0;
    
    	scanf("%d %d %d", &num, &i, &j);
    	
	i = (num >> i) & 1;
    	j = (num >> j) & 1;    
    	
	num ^= (i << j) | (j << i);
    	num ^= (j << i) | (i << j);    
	
	printf("Result: %d\n", num);
    
	return 0;
}
