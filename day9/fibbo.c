#include <stdio.h>

int main() {
    int number = 8;
    int count = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    printf("Number of divisors of %d is %d\n", number, count);
    return 0;
}