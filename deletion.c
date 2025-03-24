#include <stdio.h>
int main()
{
    int array[100],position,i,num;
    printf("Enter number of elements in array: ");
    scanf("%d", &num);

    printf("Enter %d elements:\n", num);
    for(i=0;i<num;i++)
    scanf("%d", &array[i]);

    printf("Enter the location where you wish to delete element:\n");
    scanf("%d", &position);

    if (position>=num+1)
    printf("Deletion not possible !!");
    else{
        for(i=position;i<num-1;i++)
        array[i]=array[i+1];
        printf("Resultant array:\n");

        for(i=0;i<num-1;i++)
        printf("%d ", array[i]);
    }
    return 0;
}