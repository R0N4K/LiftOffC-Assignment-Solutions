//Write a C program to enter temperature in Celsius and convert it into Fahrenheit

#include <stdio.h>

int main(void)

{
    float RADIUS, DIAMETER, CIRCUMFERENCE, AREA;

    printf("ENTER RADIUS OF THE CIRCLE: ");

    scanf("%f", &RADIUS);

    DIAMETER = 2 * RADIUS;

    CIRCUMFERENCE = 2 * 3.14 * RADIUS;

    AREA = 3.14 * (RADIUS * RADIUS);

    printf("\nDIAMETER OF THE CIRCLE IS %.2f UNITS \n", DIAMETER);


    printf("\nCIRCUMFERENCE OF THE CIRCLE IS %.2f units \n", CIRCUMFERENCE);


    printf("\nAREA OF THE CIRCLE IS %.2f SQ. UNITS \n", AREA);


    return(0);

}
