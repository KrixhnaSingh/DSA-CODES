#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size1 = 3, size2 = 3;
    int merged[10], i;

    for(i = 0; i < size1; i++)
        merged[i] = arr1[i];
    for(int j = 0; j < size2; j++)
        merged[i++] = arr2[j];

    for(int k = 0; k < size1 + size2; k++)
        printf("%d ", merged[k]);
    return 0;
}
