#include <stdio.h>

int main(){
    int hr, avs, dis;
    double lit;

    scanf("%d", &hr);
    scanf("%d", &avs);

    dis = hr * avs;

    lit = (double)dis / 12;

    printf("%.3lf\n", lit);

    return 0;
}
