#include <stdio.h>
#include <math.h>

int main(void)
{
    int input, res;
    scanf("%d", &input);
    res = pow(2,input);
    printf("%d", res);
    return 0;
}

/*2-ын өгөгдсөн тоон зэргийг ол. /2-ын n зэрэг гэдэг нь 2*2*...*2. Жишээ нь 2-ын 3 зэрэг 2*2*2=8 /

Input
Int төрлийн нэг тоо өгөгдөнө. Тэр тоо нь 2-ыг хэдэн удаа үржүүлэхийг заана.

Output
2-ын өгөгдсөн тоон зэрэг.

Example
Input:
5

Output:
32*/