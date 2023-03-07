/*
Q03. Write a program to calculate the GCD of two numbers using recursive functions.
*/

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("GCD of %d and %d is %d", a, b, gcd(a, b));

    return 0;
}

