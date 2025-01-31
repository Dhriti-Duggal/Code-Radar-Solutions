#include <stdio.h>

int main() {
    int a , b;
    char op;
    scanf("%d %d %s", &a, &b, &op);
    if(op==+){
        printf("%d %d", a+b);
    }
    return 0;
}