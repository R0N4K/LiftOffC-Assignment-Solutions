//Write a C program to enter two numbers and perform all arithmetic operations.

#include <stdio.h>

int main(void)

{

    int number1, number2;

    printf("C PROGRAM TO ENTER TWO NUMBERS AND PERFORM ALL ARITHMETIC OPERATIONS\n");

    printf("----------------------------------------------------------------------\n");

    int SUM, SUBTRACTION, MULTIPLICATION, MODULUS;

    float DIVISION;

    printf("ENTER THE FIRST NUMBER:");

    scanf("%d", &number1);

    printf("\nENTER THE SECOND NUMBER:");

    scanf("%d", &number2);

    SUM = number1 + number2;

    SUBTRACTION = number1 - number2;

    MULTIPLICATION = number1 * number2;

    MODULUS = number1 % number2;

    DIVISION = (float)number1 / number2;
    

    printf("\nSUM = %d\n", SUM);


    printf("\nDIFFERENCE = %d\n", SUBTRACTION);


    printf("\nPRODUCT = %d\n", MULTIPLICATION);


    printf("\nQUOTIENT = %f\n", DIVISION);


    printf("\nMODULUS = %d\n", MODULUS);

    return (0);

}
