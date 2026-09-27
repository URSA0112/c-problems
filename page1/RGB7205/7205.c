#include <stdio.h>
int main(void)
{
    int input, result = 1;
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
    {
        result *= i;
    }
    printf("%d", result);
    return 0;
}
/*Input
Int төрлийн бүхэл тоо өгөгдөнө.

Output
Өгөгдсөн тооны факториал.

Example
Input:
5

Output:
120*/