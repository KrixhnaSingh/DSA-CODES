#include<stdio.h>
int main(){
    int num, i;
    printf("Enter the number of elements you want: ");
    scanf("%d", &num);
    int arr[num+1];
    for (i = 0; i < num; i++) {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
     int val;
    printf("Enter the value you want to insert: ");
    scanf("%d", &val);

    int pos = num - 1;
    while (pos >= 0 && arr[pos] > val) {
        arr[pos + 1] = arr[pos];
        pos--;
    }
    arr[pos + 1] = val;
    printf("Resultant array: ");
    for (i = 0; i < num + 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
