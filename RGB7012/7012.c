/*
Өгөгдсөн секундыг цаг минут секунд болго.
Input:
3612
Output:
1 0 12
*/
#include <stdio.h>

int main(void)
{
    int input, hour, min, sec;

    scanf("%d", &input);

    min = input / 60;
    sec = input % 60;
    hour = input / 3600;

    if (min >= 60)
    {
        min = min - (60 * hour);
    }
    printf("%d-hour %d-min  %d-sec", hour, min, sec);

    return 0;
}