#include <stdio.h>

int main() {
    float temp, oil;
    int rpm;

    scanf("%f %f %d", &temp, &oil, &rpm);

    if (temp >= 70 && temp <= 100 &&
        oil >= 20 && oil <= 80 &&
        rpm >= 800 && rpm <= 3000) {
        printf("Engine Healthy");
    } else {
        printf("Engine Problem Detected");
    }

    return 0;
}
