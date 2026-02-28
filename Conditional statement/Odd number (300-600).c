#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 300 && n < 600 && n % 2 != 0)
        printf("Valid Odd Number");
    else
        printf("Invalid Number");

    return 0;
}
