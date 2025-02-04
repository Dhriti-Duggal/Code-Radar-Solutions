#include <stdio.h>

int main() {
    int a;
    if(a<=1)
    printf("Not Prime");
    else if(a%1==0 && a%a==0)
    printf("Prime");
    return 0;
}