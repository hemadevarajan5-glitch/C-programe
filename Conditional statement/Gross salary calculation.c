#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    // Input basic salary
    scanf("%f", &basic);

    // Calculate allowances based on condition
    if (basic <= 70000) {
        hra = 0.30 * basic;
        da  = 0.80 * basic;
    } else {
        hra = 0.35 * basic;
        da  = 0.90 * basic;
    }

    // Calculate gross salary
    gross = basic + hra + da;

    // Display gross salary
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
