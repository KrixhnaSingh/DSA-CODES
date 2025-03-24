#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the number of element for the array:" );
    scanf("%d",&num);
    int arr[num];
    printf("Entering the elements \n");
    for (i=0;i<num;i++){
     printf("Enter the elements: ");
     scanf("%d",&arr[i]);}
     
     printf("Dispalying the element of the array:\n");
     for (i=0;i<num;i++){
         printf("arr[%d]=%d\n",i,arr[i]);
     }
  return 0;
}