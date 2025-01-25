#include <stdio.h>
int main(){
    const double PI=3.14;
    double radius;
    float area;
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}