#include <stdio.h>

int main() {
    int age;
    char gender;
    float wage;

    scanf("%d %c", &age, &gender);

    if (gender == 'M' || gender == 'm') {
        if (age >= 18 && age <= 40)
            wage = 700;
        else if (age > 40)
            wage = 800;
    } else if (gender == 'F' || gender == 'f') {
        if (age >= 18 && age <= 40)
            wage = 650;
        else if (age > 40)
            wage = 750;
    }

    printf("Daily Wage: %.2f\n", wage);

    return 0;
}
