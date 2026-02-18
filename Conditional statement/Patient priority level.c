#include <stdio.h>

int main() {
    int symptoms;

    printf("Enter the number of symptoms: ");

    // Check for valid numeric input
    if (scanf("%d", &symptoms) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

    // Check for valid range
    if (symptoms < 0) {
        printf("Invalid number of symptoms!\n");
    }
    else if (symptoms >= 5) {
        printf("Condition: Critical\nPriority Level: High\n");
    }
    else if (symptoms >= 3 && symptoms <= 4) {
        printf("Condition: Moderate\nPriority Level: Medium\n");
    }
    else if (symptoms < 3) {
        printf("Condition: Stable\nPriority Level: Low\n");
    }

    return 0;
}
