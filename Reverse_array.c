#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    for(int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}
