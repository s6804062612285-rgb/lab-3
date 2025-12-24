#include <stdio.h>

int main() {
    int h, m, s, add;

    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d", &add);

    m = m + add;
    h = h + (m / 60);
    m = m % 60;
    h = h % 24;

    printf("Hour:%d\n", h);
    printf("Minute:%d\n", m);
    printf("second:%d\n", s);

    return 0;
}