#include <stdio.h>
int main(void)
{
    int a, b, c, res = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a == 5) res++;
    if(b==5)res++;
    if(c==5)res++;
    printf("%d", res);
    return 0;

}