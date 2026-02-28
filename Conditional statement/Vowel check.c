#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if (ch >= 65 && ch <= 122) {
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
            ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else
        printf("Out of ASCII range\n");

    return 0;
}
