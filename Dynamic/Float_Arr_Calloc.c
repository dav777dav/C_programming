#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Enter the size of the float array: \n");
    scanf("%d", &size);

    float *arr = (float*) calloc(size, sizeof(float));
    
    printf("Enter float numbers %d time.\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%f", &arr[i]);
    }

    if (arr == NULL) {
        printf("Error! NULL!\n");
    }
    else {
        printf("Your entered float numbers: ");
        for (int i = 0; i < size; ++i) {
            printf("%f ", arr[i]);
        }
        printf("\n");
        free(arr);
    }
    return 0;
}
