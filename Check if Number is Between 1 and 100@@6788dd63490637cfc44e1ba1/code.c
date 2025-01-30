#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    for(i=1; i<100; i++){
        if(num==i)
        printf("In range");
        return 0;
    }
    printf("Out of range");
    return 0;
}