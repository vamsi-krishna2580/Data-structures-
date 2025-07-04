#include <stdio.h>
int main() {
    int arr[100],size,i,j,k;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter elements of the array:\n");
    for(i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    for(i=0;i<size;i++) {
        for(j=i+1;j<size;j++) {
            if(arr[i]==arr[j]) {
                for(k=j ; k<size-1 ; k++) {  // duplicate
                    arr[k]=arr[k + 1];
                }
                size--;
                j--; 
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}