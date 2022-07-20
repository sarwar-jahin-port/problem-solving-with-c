#include <stdio.h>
int main () {
    double a, b,
        assigned_weight_a = 3.5,
        assigned_weight_b = 7.5,
        data_point_weighted_value_a,
        data_point_weighted_value_b,
        total_assigned_weight,
        total_data_point_assigned_value,
        MEDIA;

        total_assigned_weight = assigned_weight_a + assigned_weight_b;

        scanf("%lf%lf", &a, &b);

        data_point_weighted_value_a = assigned_weight_a * a;
        data_point_weighted_value_b = assigned_weight_b * b;

        total_data_point_assigned_value = data_point_weighted_value_a + data_point_weighted_value_b;

        MEDIA = total_data_point_assigned_value / total_assigned_weight;

        printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
