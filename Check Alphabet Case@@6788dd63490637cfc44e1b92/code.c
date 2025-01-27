#include <stdio.h>

int main(){
    char i;
    scanf("%c", &i);
    if(isupper(i)){
        printf("Uppercase");
    }
    else if(islower(i)){
        printf("Lowercase");
    }
    else{
        printf("Not applicable")
    }
    return 0;
}