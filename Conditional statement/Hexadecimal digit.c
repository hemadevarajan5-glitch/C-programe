#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if ((ch >= 48 && ch <= 57) ||   // 0-9
        (ch >= 65 && ch <= 70) ||   // A-F
        (ch >= 97 && ch <= 102)) {  // a-f
        printf("Valid Hexadecimal Digit");
    } else {
        printf("Invalid Hexadecimal Digit");
    }

    return 0;
}
