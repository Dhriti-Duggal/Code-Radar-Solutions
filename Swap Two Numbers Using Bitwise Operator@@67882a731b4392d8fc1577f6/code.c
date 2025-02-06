#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap using XOR
    a = a ^ b;  // Step 1: a now becomes a ^ b
    b = a ^ b;  // Step 2: b becomes the original value of a
    a = a ^ b;  // Step 3: a becomes the original value of b

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
