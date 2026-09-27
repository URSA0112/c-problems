#include <stdio.h>

int main(void)
{
    int a, b, c, d, res = 1;
    scanf("%d %d %d %d", &a, &b, &c, &d);

/*
    if (a >= 5 && b >= 5 && c >= 5 && d >= 5)
    {
        printf("Enter again:\n");
        scanf("%d %d %d %d", &a, &b, &c, &d);
    }
        shalgaad bug hudal bvl dahin input avna
*/
    if (a < 5 || b < 5 || c < 5 || d < 5)
    {
        if (a < 5)
            res *= a;
        if (b < 5)
            res *= b;
        if (c < 5)
            res *= c;
        if (d < 5)
            res *= d;

        printf("%d", res);
    }
    return 0;
}