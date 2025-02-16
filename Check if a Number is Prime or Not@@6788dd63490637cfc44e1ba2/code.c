#include <stdio.h>

int main() {
    int a=1;
    for(int i=1; i<=a; i++ ){
        if(i==2){
            printf("Prime");
        }
        else if(i%a==0){
            printf("Prime");
        }else{
            printf("Not prime");
        }
    }
    return 0;
}