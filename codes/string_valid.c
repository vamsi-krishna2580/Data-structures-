#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int flag=1;
    char str[100];
    printf("Enter a string : \n");
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        if(!isalnum(str[i])){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("Valid String");
    }
    else{
        printf("Invalid String");
    }
}
