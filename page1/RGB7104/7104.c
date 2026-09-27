#include <stdio.h>

int main()
{
    int a, b, c, d, small;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    small = a;

    if (small > b)
        small = b;
    if (small > c)
        small = c;
    if (small > d)
        small = d;

    printf("%d", small);
    return 0;
}