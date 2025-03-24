#include<stdio.h>
int main(){
    int i,j,row,column;
    printf("Enter the number of rows in array: ");
    scanf("%d",&row);
    printf("Enter the number of coloumns in array: ");
    scanf("%d",&column);
    
    int arr[row][column];
    for (i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter the elements: arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The resultant 2d array is:\n");
    for (i=0;i<row;i++){
        for (j=0;j<column;j++){
            printf("arr[%d][%d]:%d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}
