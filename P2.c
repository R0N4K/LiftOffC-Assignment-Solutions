// Write a C program to enter temperature in Celsius and convert it into Fahrenheit

#include <stdio.h>

int main(void)

{
    float CELSIUS, FAHRENHEIT;

    printf("C PROGRAM TO ENTER TEMPERATURE IN CELSIUS AND CONVERT IT INTO FAHRENHEIT\n");

    printf("------------------------------------------------------------------------\n");

    printf("ENTER TEMPERATURE IN CELSIUS = ");


    scanf("%f", &CELSIUS);

    FAHRENHEIT = (CELSIUS * 9/5) + 32;

    printf("\n%.2f CELSIUS = %.2f FAHRENHEIT", CELSIUS, FAHRENHEIT);

    return(0);

}