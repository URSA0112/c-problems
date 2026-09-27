#include <stdio.h>

int main()
{
    int a, b, small;
    scanf("%d %d", &a, &b);
    small = a;
    if(small > b){
        small = b;
    }
    printf("%d", small);

    return 0;
}