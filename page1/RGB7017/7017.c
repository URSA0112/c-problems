#include <stdio.h>

int main(void)
{
    int input, year, month;
    scanf("%d", &input);
    year = input / 12;
    month = input % 12;
    printf("%d %d", year, month);
    return 0;
}