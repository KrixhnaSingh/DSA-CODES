#include <stdio.h>
int main() {
    int i, j, row1, col1, row2, col2;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &col1);

    int array1[row1][col1];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &col2);
    if (row1 != row2 || col1 != col2) {
        printf("Addition can't be happen because Matrix dimensions do not match !!\n");
        return 0;
    }

    int array2[row2][col2];
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    int array_sum[row1][col1];
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            array_sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("%d  " ,array_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
