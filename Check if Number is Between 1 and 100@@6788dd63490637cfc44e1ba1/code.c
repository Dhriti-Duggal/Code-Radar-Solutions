#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    for(; i<100; i++){
        if(i<100){
            printf("In range");
        }else
        printf("Out of Range");
    }
    return 0;
}