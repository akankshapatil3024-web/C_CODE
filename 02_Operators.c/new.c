#include <stdio.h>

int main() {
    int A, B;

    // Input
    printf("Enter two binary inputs (0 or 1): ");
    scanf("%d %d", &A, &B);

    // AND Gate
    printf("\nAND Gate   = %d", A && B);

    // OR Gate
    printf("\nOR Gate    = %d", A || B);

    // NOT Gate
    printf("\nNOT Gate (A) = %d", !A);
    printf("\nNOT Gate (B) = %d", !B);

    // NAND Gate
    printf("\nNAND Gate  = %d", !(A && B));

    // NOR Gate
    printf("\nNOR Gate   = %d", !(A || B));

    // XOR Gate
    printf("\nXOR Gate   = %d", A ^ B);

    // XNOR Gate
    printf("\nXNOR Gate  = %d", !(A ^ B));

    return 0;
}