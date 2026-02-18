#include <stdio.h>

int main() {
    int pen, notebook, pencil;
    int total;

    // Input quantities
    scanf("%d", &pen);
    scanf("%d", &notebook);
    scanf("%d", &pencil);

    // Calculate total cost
    total = (pen * 20) + (notebook * 70) + (pencil * 9);

    // Display total amount
    printf("Total Amount: %d\n", total);

    return 0;
}
