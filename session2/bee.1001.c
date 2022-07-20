#include <stdio.h>

int main() {
    int a, b, c; /// int - we can store from -2*10^9 to 2*10^9
    scanf("%d%d", &a, &b); /// Runtime Error - & is missing in scanf

    c = a + b;

    printf("X = %d\n", c);
    /// URI/Beecrowd -> Presentation error - case mismatch, space, endline missing.

    return 0;
}

