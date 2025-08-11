#include <stdio.h>

void mergeSorted(int a[], int sizeA, int b[], int sizeB, int merged[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < sizeA && j < sizeB) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        }
        else {
            merged[k++] = b[j++];
        }
    }

    while (i < sizeA) {
        merged[k++] = a[i++];
    }

    while (j < sizeB) {
        merged[k++] = b[j++];
    }
}

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    int merged[6];

    mergeSorted(a, 3, b, 3, merged);

    printf("This is merged arrays: ");
    for (int i = 0; i < 6; i++) {
        printf("%d", merged[i]);
    }

    return 0;
}
