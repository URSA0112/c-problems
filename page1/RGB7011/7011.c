/*
Өгөгдсөн секундыг минут секунд болго.
Input:
200

Output:
3 20
*/
#include <stdio.h>
int main()
{
    int input, min, sec;
    scanf("%d", &input);
    min = input / 60;
    sec = input % 60;
    printf("%d %d", min, sec);
    return 0;
}