#include<stdio.h>
int main(){
    int n,t1=0,t2=1,t3,sum=0;
    printf("Enter a NUmber : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ;i++){
        if(i<=1){
            t3=i;
        }
        else{
            t3=t1+t2;
            t1=t2;
            t2=t3;
        }
        printf("%d\t",t3);
        sum+=t3;
    }
    printf("\n%d",sum);
}