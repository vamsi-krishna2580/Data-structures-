#include <stdio.h>
#define MAX 100
int main() {
    char str[MAX];
    int stack[MAX];
    int top = -1;
    int i, balanced = 1;
    printf("Enter an string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[') {
            if (top < MAX - 1) {
                top++;
                stack[top] = c;
            } else {
                balanced = 0;
                break;
            }
        } else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) {
                balanced = 0;
                break;
            }
            char open = stack[top];
            if ((open == '(' && c == ')') ||
                (open == '{' && c == '}') ||
                (open == '[' && c == ']')) {
                top--;
            } else {
                balanced = 0;
                break;
            }
        }
    }
    if (balanced && top == -1) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }
    return 0;
}