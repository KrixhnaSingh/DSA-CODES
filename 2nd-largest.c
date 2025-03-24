#include <stdio.h>
int main()
{
    int i,num,arr[num];
    printf("Enter the number of element you want to insert in the array:");
    scanf("%d",&num);			
    for (i=0;i<num;i++)
    {
    printf("Enter the elements:");
    scanf("%d",&arr[i]);
}
    int largest=arr[0];
    int sec_largest=arr[i];
    for (i=0;i<num;i++){
        if (arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }
        else if (arr[i]>sec_largest && arr[i]!=largest){
            sec_largest=arr[i];}
    }
    printf("The second largest number is: %d",sec_largest);

    return 0;
}