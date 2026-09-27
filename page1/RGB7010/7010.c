#include <stdio.h>

int main(void)
{
    int input, a, b, c;
    scanf("%d", &input);
    a = input / 100;
    b = input % 100 / 10;
    c = input % 10;
    printf("%d", a + b + c);

    return 0;
}