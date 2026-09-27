#include <stdio.h>

int main(void)
{
    int a, b, c, d, res = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a % 3 == 0) res++;    
    if (b % 3 == 0) res++;    
    if (c % 3 == 0) res++;    
    if (d % 3 == 0) res++;    
    printf("%d", res);
        return 0;
}

/*
Өгөгдсөн 4 тоон дотроос 3-д хуваагддаг тоонуудын тоог ол.

Input
Нэг мөрөнд Int төрлийн 4 тоо зайгаар тусгаарлагдан өгөгдөнө.

Output
3-д хуваагддаг тоонуудын тоо.

Example
Input:
3 12 8 9

Output:
3
*/