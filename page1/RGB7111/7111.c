#include <stdio.h>

int main(void)
{
    int a, b, c, d, res=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a % 11 != 0) res+=a;    
    if (b % 11 != 0) res+=b;    
    if (c % 11 != 0) res+=c;    
    if (d % 11 != 0) res+=d;    
    printf("%d", res);
        return 0;
}



/*
Өгөгдсөн 4 тооны 11-д хууваагддаггүй тоонуудынх нь нийлбэрийг ол. 

Input
Нэг мөрөнд Int төрлийн 4 тоо зайгаар тусгаарлагдан өгөгдөнө.#include <stdio.h>

int main(void) {
    // your code here

    return 0;
}

Output
11-д хуваагддаггүй тоонуудын нийлбэр.*/


