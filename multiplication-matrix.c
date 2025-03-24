#include<stdio.h>
int main() {
    int i, j, k, row1, col1, row2, col2;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &col1);
    int array1[row1][col1];
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("Enter the element for array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &col2);
    int array2[row2][col2];
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("Enter the element for array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    if (col1 != row2) {
        printf("Matrix multiplication is not possible !!\n");
        return 1;
    }

    int array_multi[row1][col2];
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            int sum = 0;
            for (k = 0; k < col1; k++) {
                sum += array1[i][k] * array2[k][j];
            }
            array_multi[i][j] = sum;
        }
    }
    printf("The product of the two matrices is:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d " ,array_multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
