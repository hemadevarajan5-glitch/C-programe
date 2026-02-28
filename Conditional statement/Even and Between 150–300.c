#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 150 && n < 300 && n % 2 == 0)
        printf("Valid Even Number");
    else
        printf("Invalid Number");

    return 0;
}
