#include <stdio.h>

int main(void)
{
    int day, hour;
    scanf("%d %d", &day, &hour);
    printf("%d", (day * 24) + hour);

    return 0;
}

/*
Input:
2 5
Output:
53
Өгөгдсөн хоног, цагийг цагт шилжүүл.
 */
