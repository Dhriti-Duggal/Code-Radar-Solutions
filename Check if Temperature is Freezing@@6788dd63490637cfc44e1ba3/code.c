#include <stdio.h>

int main() {
    int celcius;
    scanf("%d", &celcius);
    if(celcius<=0)
    printf("Freezing");
    else if(celcius>=0)
    printf("Above Freezing");
    return 0;
}