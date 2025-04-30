#include <stdio.h>
#define NUM 7

int Max_num(int n, int m) {
    return (n > m) ? n : m;
}

int rec_num(int *arr, int n) {
    if (n == 1)
        return arr[0];
    return Max_num(rec_num(arr, n - 1), arr[n - 1]);
}

int main() {
    int arr[NUM] = {4, 8, 23, 19, 5, 35, 2};
    int max = rec_num(arr, NUM);
    printf("The maximum number is: %d\n", max);
    return 0;
}
