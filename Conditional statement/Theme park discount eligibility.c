#include <stdio.h>

int main() {
    int age;

    scanf("%d", &age);

    if (age <= 12) {
        printf("Child Discount");
    } else {
        printf("Regular Ticket");
    }

    return 0;
}
