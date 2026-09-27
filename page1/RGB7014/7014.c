#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    scanf("%d %d %d", &hour, &min, &sec);
    printf("%d", ((hour * 3600) + (min * 60) + sec));

    return 0;
}