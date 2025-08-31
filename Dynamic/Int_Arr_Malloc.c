#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 0;
	printf("Enter the size of the array: \n");
	scanf("%d", &size);

	int arr[size];
	printf("Enter the elements of the array: \n");
	for (int i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}

	int* ptr = (int*) malloc(sizeof(int) * size);

	if (ptr == NULL) {
		printf("ERROR!!!, NULL!!!\n");
	}
	else {
		printf("Yes, there is allocated memory.\n");
		free(ptr);
	}

	return 0;
}
