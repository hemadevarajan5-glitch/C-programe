#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1000 && n <= 2000) {
        int root = cbrt(n);
        if (root * root * root == n)
            printf("Perfect Cube");
        else
            printf("Not Perfect Cube");
    } else {
        printf("Out of Range");
    }

    return 0;
}
