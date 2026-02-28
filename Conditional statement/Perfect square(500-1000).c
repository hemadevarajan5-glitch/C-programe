#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 500 && n <= 1000) {
        int root = sqrt(n);
        if (root * root == n)
            printf("Perfect Square");
        else
            printf("Not Perfect Square");
    } else {
        printf("Out of Range");
    }

    return 0;
}
