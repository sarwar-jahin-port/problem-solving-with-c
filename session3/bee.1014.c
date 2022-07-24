#include <stdio.h>

int main(){
    int fuel;
    double km, speed;

    scanf("%d", &fuel);
    scanf("%lf", &km);

    speed = fuel/km;

    printf("%.3lf km/l\n", speed);

    return 0;
}
