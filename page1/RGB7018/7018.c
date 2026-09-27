#include <stdio.h>
int main(void)
{
    int year, month;
    scanf("%d %d", &year, &month);
    printf("%d", (year * 12) + month);

    return 0;
}
