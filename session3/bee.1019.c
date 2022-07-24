#include <stdio.h>
int main(){
    int eh, hr, min, sec, r;

    scanf("%d", &eh);

    min = eh / 60.0;
    sec = eh % 60;
    hr = min / 60.0;
    min = min % 60;

    printf("%d:%d:%d\n", hr, min, sec);

    return 0;
}
