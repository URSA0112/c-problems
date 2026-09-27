#include <stdio.h>

int main(void)
{
    int input, mid;
    scanf("%d", &input);
    mid = (input % 100)/10;  
    printf("%d", mid);
    return 0;
}