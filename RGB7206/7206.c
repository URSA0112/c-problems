#include <stdio.h>

int main(void)
{
    int n, result=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result += 100;
    }
    printf("%d", result);
    return 0;
}

/*
! It worked >< haha! ⬇️
^  int main(void) {
^      int n, result;
^      scanf("%d", &n);
^      printf("%d",n*100);
^      return 0;
^  }


100-гийн тоог тодорхой давталт ашиглан өгөгдсөн тоон удаа нэм.

Input
Int төрлийн эерэг тоо өгөгдөнө.

Output
Нийлбэр

Example
Input:
6
Output:
600*/