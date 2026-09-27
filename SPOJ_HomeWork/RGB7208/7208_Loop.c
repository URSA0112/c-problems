#include <stdio.h>

int main(void)
{
    int input, res = 1;
    scanf("%d", &input);
    for (int i = 1; i <=input; i++)
    {
        res = res * 2;
    }
    printf("%d", res);
    return 0;
}

/*2-ын өгөгдсөн тоон зэргийг ол. /2-ын n зэрэг гэдэг нь 2*2*...*2. Жишээ нь 2-ын 3 зэрэг 2*2*2=8 /

Input
Int төрлийн нэг тоо өгөгдөнө. Тэр тоо нь 2-ыг хэдэн удаа үржүүлэхийг заана.

Output
2-ын өгөгдсөн тоон зэрэг.#include <stdio.h>

int main(void) {
    // your code here

    return 0;
}

Example
Input:
5

Output:
32*/