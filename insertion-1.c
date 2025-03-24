#include<stdio.h>
int main(){
    int num,i;
    printf("Enter the number of elements you want:");
    scanf("%d",&num);
    int arr[num];
    for (i=0;i<num;i++){
    printf("Enter the element: ");
    scanf("%d",&arr[i]);}
     
     int position,val;
     printf("Enter the location in which you want to enter the element: ");
     scanf("%d",&position);
     printf("Enetr the value you want to enter: ");
     scanf("%d",&val);
     for (i=num-1;i>=position;i--){
             arr[i+1]=arr[i];}
             num=num+1;
             arr[position]=val;
     printf("Resultant array:\n");
     for (i=0;i<num;i++){
     printf("%d\n",arr[i]);}
     return 0;
}
