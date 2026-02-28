#include <stdio.h>

int main() {
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
        printf("Sunny\n");
    else if (choice == 2)
        printf("Cloudy\n");
    else if (choice == 3)
        printf("Rainy\n");
    else if (choice == 4)
        printf("Stormy\n");
    else
        printf("Invalid input\n");

    return 0;
}
