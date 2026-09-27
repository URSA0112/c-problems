#include <stdio.h>

int main(void)
{
    int a, b, c, res=0;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
    
        if(a % 2 == 0) res+=a;
        if(b % 2 == 0) res+=b;
        if(c % 2 == 0) res+=c;
        printf("%d",res) ;
    

    return 0;
}

/*

RGB7107 - Тэгш тоонуудын нийлбэр

Өгөгдсөн 3 тоон дахь тэгш тоонуудын нийлбэрийг ол. Ядаж 1 тэгш тоо бий.

Input
Нэг мөрөнд Int төрлийн 3 тоо зайгаар тусгаарлагдан өгөгдөнө.

Output
Нийлбэр

Example
Input:
10 3 5
Output:
10
*/