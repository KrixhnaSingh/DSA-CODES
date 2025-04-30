#include <stdio.h>

void printArray(int arr[], int index, int size) {
    if(index < size) {
        printf("%d ", arr[index]);
        printArray(arr, index + 1, size);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, 0, size);
    return 0;
}
