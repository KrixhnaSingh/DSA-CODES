#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5, pos = 2, val = 99;

    for(int i = size; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = val;
    size++;

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}
