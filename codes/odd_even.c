#include<stdio.h>
int main(){
    int num,codd=0,ceven=0;
    printf("Enter size of array : ");
    scanf("%d",&num);
    int arr[num];
    int even[num];
    int odd[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[ceven]=arr[i];
            ceven++;
        }
        else{
            odd[codd]=arr[i];
            codd++;
        }
    }
    printf("Odd array : \t");
     for(int i=0;i<codd;i++){
        printf("%d\t",odd[i]);
    }
    printf("\nEven array : \t");

    for(int i=0;i<ceven;i++){
        printf("%d\t",even[i]);
    }
   
   return 0; 
}