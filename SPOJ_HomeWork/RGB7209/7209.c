#include <stdio.h>

int main(void)
{
    int base, zereg, res = 1;
    scanf("%d %d", &base, &zereg);
    for (int i = 1; i <= zereg; i++)
    {
        res *= base;
    }
    printf("%d", res);
    return 0;
}

/*
Өгөгдсөн тооны n зэргийг ол.

Input
Нэг мөрөнд Int төрлийн эерэг 2  тоо зайгаар тусгаарлагдан өгөгдөнө.

Output
an

Example
Input:
3 4

Output:
81
*/