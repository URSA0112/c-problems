#include <stdio.h>

int main(void)
{
    int a, b, c, res = 1;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1)
  
    {
        if (a % 2 == 1)
            res *= a;
        if (b % 2 == 1)
            res *= b;
        if (c % 2 == 1)
            res *= c;
        printf("%d", res);
    }
    return 0;
}

/*Өгөгдсөн 3 тоон дахь сондгой тоонуудын үржвэрийг ол. Ядаж 1 сондгой тоо байгаа.

Input
Нэг мөрөнд Int төрлийн 3 тоо зайгаар тусгаарлагдан өгөгдөнө.

Output
Үржвэр

Example
Input:
5 2 3
Output:
15
*/