#include <stdio.h>

int main() {
    int size = 0;
    int size1 = 0;

    printf("Enter size of the first array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter size of the second array: ");
    scanf("%d", &size1);
    int arr1[size1];

    printf("Enter numbers of the first array %d time: ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter numbers of the second array %d time: ", size1);
    for (int i = 0; i < size1; ++i) {
        scanf("%d", &arr1[i]);
    }

    int size2 = size + size1;
    int arr2[size2];

    for (int i = 0; i < size; ++i) {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < size1; ++i) {
        arr2[i + size] = arr1[i];
    }
    
    for (int i = 0; i < size2; ++i) {
        for (int j = i + 1; j < size2; ++j) {
            if (arr2[i] > arr2[j]) {
                int merg = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = merg;
            }

        }
    }

    printf("These are merged sorted numbers: ");
    for (int i = 0; i < size2; ++i) {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");
    return 0;
}
