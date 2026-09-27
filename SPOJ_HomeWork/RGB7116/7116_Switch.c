#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    switch (input)
    {
        case 5: printf("Onts"); break;
        case 4: printf("Sain"); break;
        case 3: printf("Dund"); break;
        case 2: printf("Muu");  break;
    }

    return 0;
}