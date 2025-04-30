#include <stdio.h>

void printReverse(int arr[], int index) {
    if(index >= 0) {
        printf("%d ", arr[index]);
        printReverse(arr, index - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printReverse(arr, size - 1);
    return 0;
}
