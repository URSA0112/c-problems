#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if(input < 5)
    printf("YES");
    else 
    printf("NO");
    return 0;
}

/*Өгөгдсөн тоо 5-аас бага бол  YES үгүй бол NO гэж хэвлэ.

Input
Int төрлийн нэг тоо өгөгдөнө.

Output
YES эсвэл NO гэж хэвлэгдэнэ.

Example
Input:
4
Output:
YES
*/