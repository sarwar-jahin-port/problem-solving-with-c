#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    int first_max, final_max;

    scanf("%d%d%d", &a, &b, &c);

    first_max = (double)(a + b + abs(a-b))/2;
    final_max = (double)(first_max + c + abs(first_max - c)) / 2;

    printf("%d eh o maior\n", final_max);

    return 0;
}
