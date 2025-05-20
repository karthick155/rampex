#include <stdio.h>

int greatest_of_three(a,b,c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    int result = greatest_of_three(x, y, z);
    printf("The greatest number is: %d\n", result);

    return 0;
}