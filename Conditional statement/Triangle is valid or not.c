#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check triangle validity
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Triangle is Valid\n");

        // Check type of triangle
        if (a == b && b == c)
            printf("It is an Equilateral Triangle");
        else if (a == b || b == c || a == c)
            printf("It is an Isosceles Triangle");
        else
            printf("It is a Scalene Triangle");
    }
    else
    {
        printf("Triangle is Not Valid");
    }

    return 0;
}
