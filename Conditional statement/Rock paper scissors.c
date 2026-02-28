#include <stdio.h>

int main() {
    int p1, p2;
    scanf("%d %d", &p1, &p2);

    if (p1 > 2 || p2 > 2)
        printf("Invalid input\n");
    else if (p1 == p2)
        printf("Draw\n");
    else if ((p1 == 0 && p2 == 2) || (p1 == 1 && p2 == 0) || (p1 == 2 && p2 == 1))
        printf("Player 1 wins\n");
    else
        printf("Player 2 wins\n");

    return 0;
}
