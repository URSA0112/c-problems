#include <stdio.h>

int main(void)
{
    int x, v, s;
    scanf("%d", &x);
    v = x * x * x;
    s = 6 * (x * x);
    printf("%d %d", v, s);

    return 0;
}