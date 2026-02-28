#include <stdio.h>

int main() {
    float income, tax;
    scanf("%f", &income);

    if (income < 30000)
        tax = 0.07 * income;
    else if (income >= 30000 && income <= 70000)
        tax = 0.15 * income;
    else
        tax = 0.20 * income;

    printf("Tax Owed: %.2f\n", tax);

    return 0;
}
