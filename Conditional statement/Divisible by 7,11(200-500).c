#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 200 && n <= 500 && n % 7 == 0 && n % 11 == 0)
        printf("Divisible by 7 and 11");
    else
        printf("Not Valid");

    return 0;
}
