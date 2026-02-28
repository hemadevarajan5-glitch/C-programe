#include <stdio.h>

int main() {
    float rainfall_cm, rainfall_mm;

    scanf("%f", &rainfall_cm);

    rainfall_mm = rainfall_cm * 10;

    printf("Rainfall in millimetres = %.2f mm\n", rainfall_mm);

    return 0;
}
