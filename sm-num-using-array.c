#include <stdio.h>

int main()
{
    int i,num,position,sum=0;
    printf("Enter the number of element for the array: ");
    scanf("%d",&num);
    int arr[num];

    for (i=0;i<num;i++){
     printf("Enter the element: ");
     scanf("%d",&arr[i]);}
     
     printf("The position of the smallest number: ");
     
     int small=arr[0];
     for (i=0;i<num;i++){
         if (arr[i]<small){
             position=i;
             small=arr[i];
            }
        }
         printf("%d",position);
    return 0;
}     