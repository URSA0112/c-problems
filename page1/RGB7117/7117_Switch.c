#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);
switch (input / 10)
{
    case 10:
    case 9:
        printf("A");
        break;

    case 8:
        printf("B");
        break;

    case 7:
        printf("C");
        break;

    case 6:
        printf("D");
        break;

        default:
            printf("F");
            break;
}
    return 0;
}

/*
Өгөгдсөн тоон үнэлгээг үсгэн үнэлгээнд шилжүүл.

Input
Тоон үнэлгээ 100-аас ихгүй эерэг бүхэл тоогоор өгөгдөнө.

Output
Тоон үнэлгээ 89-өөс их бол А, 79-өөс их В, 69-өөс их бол С, 59-өөс их бол D бусад тохиолдолд F үсгэн дүнг хэвлэ.

Example
Input:
84

Output:
В
*/