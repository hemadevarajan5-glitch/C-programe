#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
        printf("Lowercase Letter");
    else
        printf("Not Lowercase Letter");

    return 0;
}
