#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num < 1 || num > 100)
        printf("Invalid Input\n");
    else if (num % 2 != 0)
        printf("Weird\n");
    else
        printf("Not Weird\n");

    return 0;
}
