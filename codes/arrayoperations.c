#include<stdio.h>
# define size 100
int arr[size];
int n;
void Insert(){
    int pos,element;
    printf("Enter the postion : ");
    scanf("%d",&pos);
    printf("Enter the Element : ");
    scanf("%d",&element);
    if(pos<=n){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    n++;
    }

}
void delete(){
    int pos;
    printf("Enter the postion : ");
    scanf("%d",&pos);
    if(pos<=n){
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
     n--;
    }
    else{
        printf("No element at selected postion");
    }
}


int main(){
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    printf("Enter the Numbers : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int option;
    while(1){
        printf("\nChoose the operation\n\n");        
        printf("1. Insert a element in array\n");        
        printf("2. Delete a element from array\n");              
        printf("3. Exit\n");
         for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        printf("\n");        
        scanf("%d",&option);
        if (option==1){
            Insert(n);
        }
        else if(option==2){
            delete();
        }
        else if(option==3){
            break;
        }
        else{
            printf("Invalid choice");
        }
        printf("\n");
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }
      
}