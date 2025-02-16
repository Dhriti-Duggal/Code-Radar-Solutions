#include <stdio.h>

int main() {
    double a , b, result;
    char op;
    scanf("%lf %lf %c", &a, &b, &op);
    switch(op){
        case '+': result = a+b; 
        break;
        case '-': result = a-b;
        break;
        case '*': result = a*b;
        break;
        case '/': result = a/b;
        break;
        default: printf("Error");
        break;
    }
    printf("%lf", result);
    return 0;
}