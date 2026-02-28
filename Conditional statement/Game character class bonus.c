#include <stdio.h>
#include <string.h>

int main() {
    char choice[20];

    scanf("%s", choice);

    if (strcmp(choice, "Warrior") == 0) {
        printf("Extra Strength");
    }
    else if (strcmp(choice, "Mage") == 0) {
        printf("Extra Magic Power");
    }
    else if (strcmp(choice, "Rogue") == 0) {
        printf("Extra Agility");
    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}
