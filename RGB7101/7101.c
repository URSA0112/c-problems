#include <stdio.h>
int main()
{
    int a, b;
    printf("2 toog dundaa 1 temdegtiin zaitai oruulna uu : ");
    scanf("%d %d", &a, &b);
    if (a < b)
        printf("%d", b);
    else
        printf("%d", a);

    return 0;
}

// a != b hereggui hoyr adilhan too baisan ch else baiagaa uchir hevlene , 