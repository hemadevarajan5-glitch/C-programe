#include <stdio.h>

int main()
{
    float miles, gallons, mpg;

    printf("Enter miles driven: ");
    scanf("%f", &miles);

    printf("Enter gallons used: ");
    scanf("%f", &gallons);

    if (gallons == 0)
    {
        printf("Error! Gallons cannot be zero.");
    }
    else
    {
        mpg = miles / gallons;
        printf("MPG = %.2f\n", mpg);

        if (mpg < 15)
            printf("Poor");
        else if (mpg < 25)
            printf("Average");
        else if (mpg < 35)
            printf("Good");
        else
            printf("Excellent");
    }

    return 0;
}
