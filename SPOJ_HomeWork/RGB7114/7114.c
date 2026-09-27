#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a%2==0) printf("YES\n") ; else printf("NO\n");
    if(b%2==0)  printf("YES\n") ; else printf("NO\n"); 
    if(c%2==0)  printf("YES\n") ; else printf("NO\n");
    return 0;

}

/*
Гурван тоо өгөгдөнө. Тоо тэгш бол YES үгүй бол NO гэж хэвлэ.

Input
Int төрлийн 3 тоо нэг нэг мөрөнд өгөгдөнө.

Output
Тоо тус бүрийг шалгаад нэг нэг мөрөнд хариуг хэвлэ.

Example
Input:
3
4
5
Output:
NO
YES
NO
*/