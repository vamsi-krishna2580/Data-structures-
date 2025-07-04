#include<stdio.h>
int main(){
    int c1,r1,c2,r2;
    printf("Enter the No of rows in matrix 1 :\n");
    scanf("%d",&r1);
    printf("Enter the No of columns in matrix 1 :\n");
    scanf("%d",&c1);
    int matrix1[r1][c1];
    printf("Enter the Elements in matrix 1 :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the No of rows in matrix 2 :\n");
    scanf("%d",&r2);
    printf("Enter the No of columns in matrix 2 :\n");
    scanf("%d",&c2);
    int matrix2[r2][c2];
    printf("Enter the Elements in matrix 1 :\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    if(c1==c2 && r1==r2){
        for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d\t",matrix2[i][j]+matrix1[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("Dimensions Doesn't Match");
    }

}