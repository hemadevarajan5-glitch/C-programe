#include <stdio.h>
#include <math.h>

int main() {
    int base, power;
    double result;

    scanf("%d %d", &base, &power);

    if (power >= 2 && power <= 5) {
        result = pow(base, power);
        printf("Result = %.2f\n", result);
    } else {
        printf("Power out of range (2–5)\n");
    }

    return 0;
}
