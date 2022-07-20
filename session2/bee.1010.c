#include <stdio.h>

int main() {
    /*
        p1c = product 1 code
        p1u = product 1 unit
        p1p = product 1 price
        same for p2c, p2u, p2p
    */

    double p1c, p1u, p1p, p2c, p2u, p2p, value_to_pay;

    scanf("%lf%lf%lf", &p1c, &p1u, &p1p);
    scanf("%lf%lf%lf", &p2c, &p2u, &p2p);

    value_to_pay = ((p1p * p1u) + (p2p * p2u));

    printf("VALOR A PAGAR: R$ %.2lf\n", value_to_pay);

    return 0;
}
