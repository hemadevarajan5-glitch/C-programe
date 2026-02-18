#include <stdio.h>

int main()
{
    float height;

    printf("Enter height in centimeters: ");
    scanf("%f", &height);

    if (height < 150)
        printf("Category: Short");
    else if (height >= 150 && height < 170)
        printf("Category: Average Height");
    else if (height >= 170 && height < 190)
        printf("Category: Tall");
    else
        printf("Category: Very Tall");

    return 0;
}
