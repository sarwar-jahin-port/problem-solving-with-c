#include <stdio.h>
int main() {
    /*
        aw = assigned weight
        taw = total assigned weight
        dpwv = data point weight value
        tdpwv = total data point weight value
    */
    double a, b, c,
        aw_a = 2,
        aw_b = 3,
        aw_c = 5,
        taw = aw_a + aw_b + aw_c,
        tdpwv,
        MEDIA;

        scanf("%lf%lf%lf", &a, &b, &c);

        tdpwv = ((a * aw_a) + (b * aw_b) + (c * aw_c));

        MEDIA = tdpwv / taw;

        printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
