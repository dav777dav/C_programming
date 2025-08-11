#include <stdio.h>

int main() {

    int size = 0;
    int num = 0;
    int res = 0;

    printf("Enter number of size: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter numbers in array %d times: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }    

    printf("Enter the number: ");
    scanf("%d", &num);    
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            res = 1;
        }
    }
    
    if(res) {
        printf("%d is found in the array.\n", num);
    }
    else {
        printf("%d isn't found in the array.\n", num);
    }

    return 0;
}
