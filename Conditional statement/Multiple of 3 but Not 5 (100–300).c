#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 100 && n <= 300 && n % 3 == 0 && n % 5 != 0)
        printf("Valid Number");
    else
        printf("Invalid Number");

    return 0;
}
