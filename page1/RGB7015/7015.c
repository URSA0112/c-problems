/*
Input:
44
Output:
1 20
Өгөгдсөн цагийг хоног цагт шилжүүл.
*/
#include <stdio.h>

int main(void)
{
    int input, day, hour;
    scanf("%d", &input);
    day = input / 24;
    hour = input % 24;
    printf("%d %d", day, hour);
    return 0;
}