#include<stdio.h>
int main(){
    int c1,r1,sum=0;
    printf("Enter the No of rows in matrix  :\n");
    scanf("%d",&r1);
    printf("Enter the No of columns in matrix  :\n");
    scanf("%d",&c1);
    int matrix[r1][c1];
    printf("Enter the Elements in matrix  :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            sum+=matrix[i][j];
        }
        printf("sum of elements in %d row is %d\n",i+1,sum);
        sum=0;
    }
}