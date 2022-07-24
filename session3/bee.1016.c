#include <stdio.h>

int main(){
    /*
        a - for how many km you want to calculate the time to reach that distance.
    */
    int a, time;

    scanf("%d", &a);

    time = a * 2;

    printf("%d minutos\n", time);

    return 0;
}
