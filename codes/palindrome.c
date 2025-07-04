#include<stdio.h>
#include<string.h>
int main(){
    char str[100],len,flag=1;
    printf("Enter a String : ");
    scanf("%s",str);
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("%s is palindrome");
    }
    else{
        printf("%s is not a Palindrome");
    }
    return 0 ;
}