#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);

    if (num >= 25.0 && num <= 50.0) {
        if (num == (int)num)
            printf("It is an integer\n");
        else
            printf("Not an integer\n");
    } else
        printf("Out of range\n");

    return 0;
}
