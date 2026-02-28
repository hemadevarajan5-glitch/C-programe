#include <stdio.h>

int main() {
    int x, y, temp, sum;

    scanf("%d %d", &x, &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    sum = x + y;

    if (sum % 2 == 0)
        printf("Sum is Even\n");
    else
        printf("Sum is Odd\n");

    if (x > 0 && y > 0)
        printf("Both Positive\n");
    else if (x < 0 && y < 0)
        printf("Both Negative\n");
    else
        printf("One Positive and One Negative\n");

    return 0;
}
