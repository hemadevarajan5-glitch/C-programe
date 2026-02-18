#include <stdio.h>

int main() {
    int a, b, product;
    float result;

    scanf("%d", &a);
    scanf("%d", &b);

    product = a * b;

    if (product % 2 == 0)
        result = product / 2.0;
    else
        result = product / 3.0;

    printf("Result = %.2f\n", result);

    return 0;
}
