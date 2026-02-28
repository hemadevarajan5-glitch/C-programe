#include <stdio.h>

int main() {
    int num, last;
    scanf("%d", &num);

    last = num % 10;

    if (last % 2 == 0 && last % 4 == 0)
        printf("Divisible by both 2 and 4\n");
    else if (last % 2 == 0)
        printf("Divisible by 2 only\n");
    else
        printf("Not divisible by 2 or 4\n");

    return 0;
}
