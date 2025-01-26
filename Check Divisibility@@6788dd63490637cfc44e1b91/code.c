#include <stdio.h>

int main(){
    int i;
    if(i%5==0){
        printf("Not divisible");
    }
    else if(i%11==0){
        printf("Not divisible");
    }
    else if(i%55==0){
        printf("Divisible");
    }
    else{
        printf("Not divisible");
    }
    return 0;
}