#include <stdio.h>

int main(void) {
    int input;

    scanf("%d", &input);

    if (input > 1 && input <= 5) {
        if (input > 3) {
            printf("Tentssen\n");
        } else if (input <= 3) {
            printf("Unasan\n");
        }
    }

    return 0;
}


/*
Тоон дүн 3-аас их бол тэнцсэнд тооцно. Бусад тохиолдолд унана. Өгөгдсөн тоон дүн тэнцсэн эсэхийг тогтоо.

Input
Тоон дүн зөвхөн 2,3,4,5 гэсэн тоонуудын аль нэгээр өгөгдөнө.

Output
Тэнцсэн тохиолдолд "Tentssen", эсрэг тохиолдолд "Unasan" гэж хэвлэ.

Example
Input:
4
Output:
Tentssen*/