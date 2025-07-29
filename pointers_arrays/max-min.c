#include <stdio.h>

int main() {
    int n = 0;
    int arr[n] = {};
    
    printf("Enter an array size: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter %d-th elements: ", i + 1);
        scanf("%d", arr + i);
    }
    
    int *max = arr; 
    int *min = arr;
    
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > *max){
            max = arr + i;
        }
        else{ 
            min = arr + i;
        }
    }
    
    printf("Maximum number is %d.\n", *max);
    printf("Minimum number is %d.\n", *min);
    
    return 0;
}
