#include <stdio.h>

int main() {
    float n;
    scanf("%f", &n);

    if (n >= -10.0 && n <= 0.0 && n < -5.7)
        printf("Valid Negative Number");
    else
        printf("Invalid Number");

    return 0;
}
