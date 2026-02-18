#include <stdio.h>

int main() {
    int angle;

    // Input angle
    scanf("%d", &angle);

    // Normalize angle between 0 and 360
    angle = angle % 360;

    // Determine direction using selection statement
    if (angle == 0)
        printf("Direction: East\n");
    else if (angle == 90)
        printf("Direction: North\n");
    else if (angle == 180)
        printf("Direction: West\n");
    else if (angle == 270)
        printf("Direction: South\n");
    else
        printf("No exact direction for this angle.\n");

    return 0;
}
