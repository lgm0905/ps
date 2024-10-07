#include <stdio.h>

int main() {
    int h, m, d;
    scanf("%d %d\n%d", &h, &m, &d);

    m += d;
    h += m / 60;
    h %= 24;
    m = m % 60;

    printf("%d %d", h, m);
}