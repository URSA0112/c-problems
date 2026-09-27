#include <stdio.h>

int try1()
{
    int input, num1, num2, result;
    printf("2 orontoi too oruulna uu : ");
    scanf("%d", &input);
    if (input < 10)
    {
        printf("9 uus ih too oruulna uu.");
        scanf("%d", &input);
    }

    num1 = input / 10;
    printf("%d", num1);
    //...
    return 0;
    // if ashiglah uyd buruu input oruulaad shalgahdaa gantshan udaa shalgaj baisan tul if iin orond while heregleed uzy
}

int try2()
{
    int input, num1, num2, result;
    printf("2 orontoi too oruulna uu : ");
    scanf("%d", &input);
    while (input < 10 && input > 99) // 2 orontoi toonoos iluu uyd hyzgaarlalt hiih
    {
        printf("10-99 iin hoorond too oruulna u! : "); // comment zasav
        scanf("%d", &input);
    }
    num1 = input / 10;
    num2 = input % 10;
    result = num1 * num2;

    printf("%d * %d = %d", num1,num2,result);

    return 0;
}

int main()
{
    try2();
}