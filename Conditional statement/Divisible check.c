#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 200 && num <= 800) {
        if (num % 4 == 0 && num % 6 == 0 && num % 8 != 0)
            printf("Divisible by 4 and 6 but not by 8\n");
        else
            printf("Condition not satisfied\n");
    } else
        printf("Out of range\n");

    return 0;
}
