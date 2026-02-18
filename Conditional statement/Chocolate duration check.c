#include <stdio.h>

int main() {
    int total, perDay, days;

    // Input values
    scanf("%d", &total);
    scanf("%d", &perDay);
    scanf("%d", &days);

    // Check if chocolates last
    if (total >= perDay * days)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
