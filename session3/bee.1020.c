#include <stdio.h>

int main(){
    int gdays, year, month, day;

    scanf("%d", &gdays);

    year = gdays / 365;
    day = gdays % 365;
    month = day / 30;
    day = day % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);

    return 0;
}
