#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    for(i=1; i<=100; i++){
        if(num==i){
        printf("In Range");
        return 0;
        }
    }
    printf("Out of Range");
    return 0;
}