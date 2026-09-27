#include <stdio.h>

int main()
{
    int a, b, c, d, sum = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > 80) sum += a;
    if (b > 80) sum += b;
    if (c > 80) sum += c;
    if (d > 80) sum += d;

    printf("%d", sum);

    return 0;
}
/*
Өгөгдсөн 4 тооны 80-аас их тоонуудын нийлбэрийг ол.

Input
Нэг мөрөнд Int төрлийн 4 тоо зайгаар тусгаарлагдан өгөгдөнө.

Output
Нийлбэр.

Example
Input:
85 75 96 69
Output:
181
*/