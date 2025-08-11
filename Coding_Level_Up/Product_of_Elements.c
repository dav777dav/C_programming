#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int ar[5] = {4, 5, 6, 7, 8};

    for(int i = 0; i < 5; i++) {
        printf("%d * %d = %d\n", arr[i], ar[i], arr[i] * ar[i]);
    }

    return 0;

}
