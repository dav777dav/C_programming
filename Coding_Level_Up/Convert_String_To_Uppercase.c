#include <stdio.h>

int main() {

	char str[50];
	int i = 0;

	printf("Enter a string: ");
    scanf("%c", &str[i]);
        
	while(str[i] != '\0') {
		if(str[i] >= 'a' && str[i] <= 'z') {
		    str[i] = str[i] - 32;
			printf("The uppercase string is %c.\n", str[i]);
		}
		else {
			printf("Please, enter only string.\n");
		}
		i++;
	}

	return 0;
}
