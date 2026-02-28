#include <stdio.h>

int main() {
    int sh, sm, eh, em;
    int startTotal, endTotal, duration, hours, minutes;

    scanf("%d %d", &sh, &sm);
    scanf("%d %d", &eh, &em);

    startTotal = sh * 60 + sm;
    endTotal = eh * 60 + em;

    duration = endTotal - startTotal;

    hours = duration / 60;
    minutes = duration % 60;

    printf("Trip Duration: %d Hours %d Minutes", hours, minutes);

    return 0;
}
