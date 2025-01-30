#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    for(; i<100; i++){
        printf("In range");
    }
    printf("Out of range");
    return 0;
}