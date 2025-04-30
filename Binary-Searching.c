#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(key < arr[mid]) return binarySearch(arr, low, mid - 1, key);
        else return binarySearch(arr, mid + 1, high, key);
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int key = 10;
    int index = binarySearch(arr, 0, 5, key);
    if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("Not found\n");
    return 0;
}
