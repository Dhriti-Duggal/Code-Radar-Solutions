#include <stdio.h>
int main(){
    int radius;
    float area;
    scanf("%d", &radius);
    area = radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}