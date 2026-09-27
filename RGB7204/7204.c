#include <stdio.h>

int main(void)
{
    int input, result = 0;
    scanf("%d", &input);
    while (input > 0)
    {
        result = input + result;
        input--;
        // printf("%d", result);
    }
    printf("%d", result);
    return 0;
}

//for loop eer bodj bas bolno , i ni uuruu n hurtelh buh toonuud . res= 0 ; res += i 

/*
Эхний n тооны нийлбэрийг тодорхой давталт ашиглан ол.

Input
Int төрлийн эерэг бүхэл тоо өгөгдөнө.

Output
1-ээс n тооны нийлбэр.

Example
Input:
5

Output:
15*/