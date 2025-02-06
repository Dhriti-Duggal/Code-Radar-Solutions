#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("%d,  %d", a, b);

    // Swap using XOR
    a = a ^ b;  
    b = a ^ b;  
    a = a ^ b;  

    printf("%d,%d\n", a, b);

    return 0;
}
