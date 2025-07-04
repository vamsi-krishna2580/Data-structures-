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
    int temp=0;
     for(int j=0;j<n-1;j++){                          // Ascending order
    for(int i=0;i<n-j-1;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}