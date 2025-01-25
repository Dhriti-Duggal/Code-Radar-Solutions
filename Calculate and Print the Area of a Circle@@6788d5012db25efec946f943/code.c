#include <stdio.h>
int main(){
    const double PI=3.14;
    int radius;
    float area;
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}