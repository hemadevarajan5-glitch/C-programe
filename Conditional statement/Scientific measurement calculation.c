#include <stdio.h>

int main() {
    float value;

    scanf("%f", &value);

    if (value < 0) {
        printf("Negative Measurement");
    }
    else if (value == 0) {
        printf("Neutral Measurement");
    }
    else if (value >= 0 && value <= 10) {
        printf("Low Positive Measurement");
    }
    else if (value >= 11 && value <= 50) {
        printf("Moderate Positive Measurement");
    }
    else {
        printf("Strong Positive Measurement");
    }

    return 0;
}
