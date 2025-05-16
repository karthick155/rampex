#include <stdio.h>

int main() {
    int a, b, c;

    // Simple assignment
    a = 10;
    printf("Value of a: %d\n", a);

    // Add and assign
    b = 5;
    b += a; // Equivalent to b = b + a
    printf("Value of b after +=: %d\n", b);

    // Subtract and assign
    c = 20;
    c -= a; // Equivalent to c = c - a
    printf("Value of c after -=: %d\n", c);

    // Multiply and assign
    a *= 2; // Equivalent to a = a * 2
    printf("Value of a after *=: %d\n", a);

    // Divide and assign
    b /= 3; // Equivalent to b = b / 3
    printf("Value of b after /=: %d\n", b);

    // Modulus and assign
    c %= 3; // Equivalent to c = c % 3
    printf("Value of c after %%=: %d\n", c);

    return 0;
}