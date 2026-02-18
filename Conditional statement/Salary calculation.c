#include <stdio.h>

int main() {
    char gender;
    int hours;
    float salary;

    // Input section
    // Just take inputs directly without prompting
    scanf("%c", &gender);
    scanf("%d", &hours);

    // Salary calculation
    if (gender == 'M' || gender == 'm') {
        if (hours <= 8) {
            salary = hours * 80;
        } else {
            salary = (8 * 80) + (hours - 8) * 100;
        }
    } 
    else if (gender == 'F' || gender == 'f') {
        if (hours <= 8) {
            salary = hours * 60;
        } else {
            salary = (8 * 60) + (hours - 8) * 100;
        }
    } 
    else {
        printf("Invalid gender input!\n");
        return 0;
    }

    // Output total salary
    printf("Total salary of the employee = Rs. %.2f\n", salary);

    return 0;
}
