#include <stdio.h>
int main(){
    /// double - works with both integer and fractional numbers.
    double a, b, c;
    /// double can handle big data 10^308
    scanf("%lf%lf%d", &a, &b, &c);

    c = a + b;
    printf("X = %.2lf\n", c); /// here .2 means 2integer after .

    return 0;
}
