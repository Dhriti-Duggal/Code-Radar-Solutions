#include <stdio.h>

int main() {
    double a , b, result;
    char op;
    scanf("%lf %lf %c", &a, &b, &op);
    switch(op){
        case '+': result = a+b;
        case '-': reuslt = a-b;
        case '*': result = a*b;
        case '/': result = a/b;
        default: printf("Error");
    }
    printf(result);
    return 0;
}