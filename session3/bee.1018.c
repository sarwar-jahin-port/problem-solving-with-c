#include <stdio.h>

int main(){
    /*
        hundred/ fifty/ twenty/ ten/ five/ two/ one = how many hundred/ fifty/ twenty/ ten/ five/ two/ one tk possible.
        r = remaining amount after hundred/ fifty/ twenty/ ten/ five/ two/ one cut.
        r = r amount of money.
    */

    int n, hundred, fifty, twenty, ten, five, two, one, r;

    scanf("%d", &n);

    hundred = n / 100.0;
    r = n % 100;
    fifty = r/ 50.0;
    r = r % 50;
    twenty = r/ 20.0;
    r = r % 20;
    ten = r/ 10.0;
    r = r % 10;
    five = r/ 5.0;
    r = r % 5;
    two = r/ 2.0;
    r = r% 2;
    one = r/ 1.0;
    r = r % 1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, hundred, fifty, twenty, ten, five, two, one);

    return 0;
}
