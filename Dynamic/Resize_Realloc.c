#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 0;
	int new_size = 0;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter the array numbers %d time: \n", size);
	for (int i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}

	int* ptr = (int*) malloc(sizeof(int) * size);
	if (ptr == NULL) {
		printf("Error! NULL!\n");
	}
	else {
		printf("Your entered numbers:");
		for (int i = 0; i < size; ++i) {
			printf(" %d", arr[i]);
		}
		printf("\n");
		free(ptr);
	}

	printf("Enter the new size: ");
	scanf("%d", &new_size);

	ptr = (int*) realloc(ptr, sizeof(int) * new_size);
	if (ptr == NULL) {
		printf("NULL! Error!\n");
	}
	else {
		printf("Enter the array numbers with new size(%d time):\n", new_size);
		for (int i = 0; i < new_size; ++i) {
			scanf("%d", &arr[i]);
		}

		printf("The new numbers:");
		for (int i = 0; i < new_size; ++i) {
			printf(" %d", arr[i]);
		}
		printf("\n");
	}

	return 0;

}
