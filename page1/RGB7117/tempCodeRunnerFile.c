#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);
switch (input / 10)
{
    case 10:
    case 9:
        printf("A");
        break;

    case 8:
        printf("B");
        break;

    case 7:
        printf("C");
        break;

    case 6:
        printf("D");
        break;
}
    return 0;
}
