#include <stdio.h>

int main(void)
{
    int min, sec;
    scanf("%d %d", &min, &sec);
    printf("%d", (min * 60) + sec);

    return 0;
}
