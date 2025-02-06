#include <stdio.h>

int main() {
    int num;
    int a ;
    scanf("%d", &a);
    int nth_bit = (num>>a) & 1;
    print("%d", nth_bit);
    return 0;
}