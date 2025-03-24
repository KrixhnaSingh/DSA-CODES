#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the number of element for the array:");
    scanf("%d",&num);
    int arr[num];

    for (i=0;i<num;i++){
     printf("Enter the element: ");
     scanf("%d",&arr[i]);}
     
     printf("Dispalying the element of the array:\n");
     int mean;
     for (i=0;i<num;i++){
         printf("arr[%d]=%d\n",i,arr[i]);
         sum+=arr[i];
         mean=sum/num;
     }
     printf("Mean of the numbers are: %d",mean);
 return 0;
}