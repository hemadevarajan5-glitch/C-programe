#include <stdio.h>

int main() {
    float salary, percent, newSalary;
    scanf("%f %f", &salary, &percent);

    newSalary = salary + (salary * percent / 100);
    printf("New Salary: %.2f\n", newSalary);

    return 0;
}
