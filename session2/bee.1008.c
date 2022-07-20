#include <stdio.h>

int main () {
    /*
        NUMBER = employee number
        wh = worked hour
        phs = per hour salary
        SALARY = monthly salary
    */

    double NUMBER, wh, phs, SALARY;

    scanf("%lf%lf%lf", &NUMBER, &wh, &phs);

    SALARY = wh * phs;

    printf("NUMBER = %.0lf\nSALARY = U$ %.2lf\n", NUMBER, SALARY);

    return 0;
}
