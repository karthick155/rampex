#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next, i;
    for(i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printFibonacci(n);
    return 0;
}