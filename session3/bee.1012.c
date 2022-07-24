#include <stdio.h>
#include <math.h>

int main(){
    /*
        a, b, c, = values.
        tri = area of triangle.
        cir = area of circle.
        tra = area of trapezium.
        squ = area of square.
        rec = area of rectangular.
    */

    double a, b, c, pi= 3.14159, tri, cir, tra, squ, rec;

    scanf("%lf%lf%lf", &a, &b, &c);

    tri = .5 * a * c;
    cir = pi * pow(c, 2);
    tra = (((double)(a+b)/2)*c);
    squ = b * b;
    rec = a * b;

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", squ);
    printf("RETANGULO: %.3lf\n", rec);

    return 0;
}
