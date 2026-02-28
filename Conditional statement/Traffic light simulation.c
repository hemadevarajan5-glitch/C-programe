#include <stdio.h>

int main() {
    char color[10];
    scanf("%s", color);

    if (color[0] == 'R' || color[0] == 'r')
        printf("Stop\n");
    else if (color[0] == 'Y' || color[0] == 'y')
        printf("Proceed with caution\n");
    else if (color[0] == 'G' || color[0] == 'g')
        printf("Go\n");
    else
        printf("Invalid Color\n");

    return 0;
}
