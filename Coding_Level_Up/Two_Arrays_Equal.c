#include <stdio.h>

int arraysEqual(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    int size = 3;

    if (arraysEqual(arr1, arr2, size)) {
        printf("Arrays are equal.\n");
    }
    else {
        printf("Arrays aren't equal.\n");
    }
    
    return 0;
}
