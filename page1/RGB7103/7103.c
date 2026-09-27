#include <stdio.h>

int main(void)
{
    int a, b, c, big;
    scanf("%d %d %d", &a, &b, &c);
    big = a;
    if (big < b && b > c)
        big = b;
    else if
        (big < c)
            big = c;
    printf("%d", big);
    return 0;
}