#include <stdio.h>

int main() {
    int arr[] = {5, 1, 9, 3, 7};
    int max = arr[0], min = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
