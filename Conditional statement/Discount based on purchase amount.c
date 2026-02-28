#include <stdio.h>

int main() {
    float amount, discount;

    scanf("%f", &amount);

    if (amount >= 5000)
        discount = amount * 0.20;
    else if (amount >= 2000)
        discount = amount * 0.10;
    else
        discount = amount * 0.05;

    printf("Discount = %.2f", discount);

    return 0;
}
