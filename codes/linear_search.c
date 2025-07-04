#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int value;
    int flag=0;
    printf("Enter the value to be searched : ");
    scanf("%d",&value);
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            printf("%d is Found at %d",value,i+1);
            flag=1;
        }
    }
    if(flag==0){
        printf("%d is not found",value);
    }
}