#include <stdio.h>
int main() {
    int array1[100], array2[100], mergedArray[200];
    int size1, size2, i, j;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    
    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    
    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (i = 0, j = size1; i < size2; i++, j++) {
        mergedArray[j] = array2[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    return 0;
}
