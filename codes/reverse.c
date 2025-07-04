#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i=num-1;i>=0;i--){
        scanf("%d",&arr[i]);
    }
    printf("OUTPUT : \n");
     for(int i=0;i<num;i++){
        printf("%d\t",arr[i]);
    }
   return 0; 
}