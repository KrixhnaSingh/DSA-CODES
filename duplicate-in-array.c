#include <stdio.h>
int main()
{
    int i,j,num;
    printf("Enter the number of element of array: ");
    scanf("%d",&num);
    int arr[num];
    for (i=0;i<num;i++){
    printf("Enter the elements: ");
    scanf("%d",&arr[i]);}
    
    for (i=0;i<num;i++){
        for(j=i+1;j<num;j++){
    if(arr[i]==arr[j]){
        printf("Yes it contains duplicate number !!");
        printf("The duplicate number is: %d",arr[i]);
            }else {
                printf("No, There is no duplicate number !!");
            }
        }    
    }
    return 0;
} 