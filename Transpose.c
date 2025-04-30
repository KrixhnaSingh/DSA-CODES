#include<stdio.h>
int main() {
    int i, j, row1, col1;
    printf("Enter the number of rows: ");
    scanf("%d", &row1);
    printf("Enter the number of columns: ");
    scanf("%d", &col1);
    
    int array[row1][col1];
    int transpose[col1][row1];
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("Enter the element for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            transpose[j][i] = array[i][j];
        }
    }

    printf("\nTranspose of the matrix is:\n");
    for (i = 0; i < col1; i++) {
        for (j = 0; j < row1; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
