#include<stdio.h>
int main(){
    int l,m;

    printf("Enter the size of array1 : \n");
    scanf("%d",&l);

    int arr1[l];
    printf("Enter array 1: \n");
    for(int i=0;i<l;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of array2 : \n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter array 2: \n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int mergedarray[l+m];
    int j=l;
    for(int i=0;i<m;i++){
        if(i<l){
        mergedarray[i]=arr1[i];
        }
        mergedarray[j]=arr2[i];
        j++;
    }
     printf("OUTPUT : \n");
     for(int i=0;i<l+m;i++){
        printf("%d\t",mergedarray[i]);
    }

}