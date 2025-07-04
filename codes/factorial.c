#include<stdio.h>
int main(){
    int n,sum=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        sum=sum*i;
    }
    printf("Factorial of %d is %d",n,sum);
}