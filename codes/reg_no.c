#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter reg Numbers\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Reg no to Search\n");
    int reg,flag=0;
    scanf("%d",&reg);
    for(int i=0;i<n;i++){
        if (reg==arr[i]){
            flag=1;
            printf("%d is found at %d",reg,i+1);
            break;
        }
    }
    if (!flag){
    printf("%d is not found",reg);
    }
}