#include <stdio.h>

int main(void)
{
    int x, last;
    scanf("%d", &x);
    last = x % 10;
    printf("%d", last);

    return 0;
}