#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age!\n");
    }
    else if (age <= 12) {
        printf("Category: Child\nTicket Price: Rs. 100\n");
    }
    else if (age >= 13 && age <= 19) {
        printf("Category: Teenager\nTicket Price: Rs. 150\n");
    }
    else if (age >= 20 && age <= 60) {
        printf("Category: Adult\nTicket Price: Rs. 200\n");
    }
    else if (age >= 61) {
        printf("Category: Senior Citizen\nTicket Price: Rs. 120\n");
    }

    return 0;
}
