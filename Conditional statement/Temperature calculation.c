#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    if (celsius > 30)
        printf("Weather is Hot");
    
    if (celsius <= 30)
        printf("Weather is Normal");

    return 0;
}
