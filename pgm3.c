#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Ask the user to input the temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Formula to convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Display the result
    printf("Temperature in Celsius: %.2f", celsius,"c");

    return 0;
}

