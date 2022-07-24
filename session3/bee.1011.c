#include <stdio.h>
#include <math.h>
int main(){
    double r, pi=3.14159, VOLUME;

    scanf("%lf", &r);

    VOLUME = (4.0/3) * pi * pow(r, 3);

    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}
