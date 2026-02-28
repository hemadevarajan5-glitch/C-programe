#include <stdio.h>

int main() {
    int n, i, flag = 0;

    scanf("%d", &n);

    if (n >= 100 && n <= 1000) {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && n > 1)
            printf("Prime Number");
        else
            printf("Not a Prime Number");
    } else {
        printf("Out of Range");
    }

    return 0;
}
