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
    printf("lf", result);
    return 0;
}