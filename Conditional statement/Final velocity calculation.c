#include <stdio.h>

int main() {
    float u, a, t, v;

    scanf("%f %f %f", &u, &a, &t);

    v = u + a * t;

    printf("Final Velocity = %.2f", v);

    return 0;
}
