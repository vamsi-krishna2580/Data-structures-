#include<stdio.h>
int main(){
    int n,count,arr1[100];
    printf("Enter the size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Numbers : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i] == -1)
            continue;
        count=1;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }

        }
        printf("%d : %d time\n",arr[i],count);
    }
}