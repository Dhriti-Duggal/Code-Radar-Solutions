#include <stdio.h>

int main() {
    int a , b, result;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch(op){
        case '+': result = a+b;
        case '-': reuslt = a-b;
        case '*': result = a*b;
        case '/': result = a/b;
        default: 'Error';
    }
    return 0;
}