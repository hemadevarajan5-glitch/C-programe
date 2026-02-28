#include <stdio.h>

int main() {
    double freq;
    scanf("%lf", &freq);

    if (freq < 3e9)
        printf("Radio Waves\n");
    else if (freq >= 3e9 && freq < 3e11)
        printf("Microwaves\n");
    else if (freq >= 3e11 && freq < 4e14)
        printf("Infrared\n");
    else if (freq >= 4e14 && freq < 7.5e14)
        printf("Visible Light\n");
    else if (freq >= 7.5e14 && freq < 3e16)
        printf("Ultraviolet\n");
    else if (freq >= 3e16 && freq < 3e19)
        printf("X-Rays\n");
    else
        printf("Gamma Rays\n");

    return 0;
}
