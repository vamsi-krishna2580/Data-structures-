#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void PUSH(int value){
    stack[++top]=value;
    printf("%d is Pushed into Stack\n\n",value);
}

void POP(){
    if(top == -1){
        printf("Stack is UnderFlow\n");
    }
    else{
        printf("%d is Poped from the stack\n",stack[top--]);
    }
    return ;
}

void DISPLAY(){
    if (top!=-1){
        printf("The elements in stack ");
        for(int i=0 ; i<=top;i++){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
    else{
        printf("Stack is Empty\n");
    }
}

void PEEK(){
    if (top!=-1){
        printf("%d is Peek of stack \n", stack[top]);
    }
}



int main(){
    int n;
    int value;
    while(1){
        printf("Choose the Stack Operation : \n\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEk\n");
        printf("4.DISPLAY\n");
        printf("5.EXIT\n\n");
        scanf("%d",&n);
        if (n==1){
            if(top<=SIZE-1){
                printf("Enter the value :");
                scanf("%d",&value);
                PUSH(value);
            }
            else{
                printf("Stack is Overflow \n");
            }
        }
        else if(n==2){
            POP();
        }
        else if(n==3){
            PEEK();
        }
        else if(n==4){
            DISPLAY();
        }
        else if(n==5){
            printf("Exited stack \n");
            return 0;
        }
        else{
            printf("Invalid Choice\n");
        }
    }
}