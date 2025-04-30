#include <stdio.h>

int main() {
    int arr[] = {4, 7, 9, 11, 15};
    int key = 9, index = -1;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }
    if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("Not found\n");
    return 0;
}
