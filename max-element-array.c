#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int findMax(int arr[], int n) {
    if(n == 1) return arr[0];
    return max(arr[n-1], findMax(arr, n-1));
}

int main() {
    int arr[] = {4, 8, 23, 19, 5, 35, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum number is: %d\n", findMax(arr, n));
    return 0;
}
