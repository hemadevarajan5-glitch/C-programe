#include <stdio.h>

int main() {
    int voltage;
    scanf("%d", &voltage);

    if (voltage >= 0 && voltage <= 50)
        printf("Low Voltage\n");
    else if (voltage >= 51 && voltage <= 100)
        printf("Medium Voltage\n");
    else if (voltage >= 101 && voltage <= 150)
        printf("High Voltage\n");
    else
        printf("Critical Voltage\n");

    return 0;
}
