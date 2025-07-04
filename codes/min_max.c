#include<stdio.h>
int main(){
    int n;
     printf("Enter the size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Numbers : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
     if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Max : %d\nMin : %d",max,min);
}