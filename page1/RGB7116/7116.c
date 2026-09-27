#include <stdio.h>
int main(void)
{
    int input, res;
    scanf("%d", &input);
    if (input == 5) printf("Onts");
    else if (input == 4) printf("Sain");
        else if (input == 3) printf("Dund");
            else if (input == 2) printf("Muu");

     return 0;
}
/*
Өгөгдсөн тоон дүнг үсгэн дүн рүү шилжүүл.

Input
Тоон дүн нь 2,3,4,5-ын зөвхөн аль нэгээр өгөгдөнө.

Output
5 байвал "Onts", 4 байвал "Sain", 3 байвал "Dund", 2 байвал "Muu" гэж хэвлэ.

Example
Input:
4
Output:
Sain*/