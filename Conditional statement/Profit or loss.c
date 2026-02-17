#include <stdio.h>

int main() {
    int cost, sell;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cost, &sell);

    if (sell > cost)
        printf("Profit = %d", sell - cost);
    else if (sell < cost)
        printf("Loss = %d", cost - sell);
    else
        printf("No profit no loss");

    return 0;
}
