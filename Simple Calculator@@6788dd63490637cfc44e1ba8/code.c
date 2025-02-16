#include <stdio.h>

int main() {
    int a , b, result;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch(op){
        case '+': result = a+b; 
        break;
        case '-': result = a-b;
        break;
        case '*': result = a*b;
        break;
        case '/': if(b==0){
            printf("error")
        }else{
            result = a/b;
        }
        break;
        default: printf("Error");
        break;
    }
    printf("%d", result);
    return 0;
}