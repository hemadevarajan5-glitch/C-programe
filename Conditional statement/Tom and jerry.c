#include <stdio.h>

int main() {
    float jerrySpeed, tomSpeed, distance, time;

    scanf("%f %f %f", &jerrySpeed, &tomSpeed, &distance);

    if (tomSpeed <= jerrySpeed)
        printf("Tom cannot catch Jerry\n");
    else {
        time = distance / (tomSpeed - jerrySpeed);
        printf("Tom will catch Jerry in %.2f seconds\n", time);
    }

    return 0;
}
