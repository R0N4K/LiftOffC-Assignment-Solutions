/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following :
Percentage >= 90 % : Grade A
Percentage >= 80 % : Grade B
Percentage >= 70 % : Grade C
Percentage >= 60 % : Grade D
Percentage >= 40 % : Grade E
Percentage <  40 % : Grade F*/


#include <stdio.h>


int main(void)

{
    int PHYSICS, CHEMISTRY, BIOLOGY, MATHEMATICS, COMPUTER;

    float PERCENTAGE;

    printf("ENTER PHYSICS MARKS = ");

    scanf("%d", &PHYSICS);

    printf("\nENTER CHEMISTRY MARKS = ");

    scanf("%d", &CHEMISTRY);

    printf("\nENTER BIOLOGY MARKS = ");

    scanf("%d", &BIOLOGY);

    printf("\nENTER MATHEMATICS MARKS = ");

    scanf("%d", &MATHEMATICS);

    printf("\nENTER COMPUTER MARKS = ");

    scanf("%d", &COMPUTER);

    printf("---------------------------------\n");

    PERCENTAGE = (PHYSICS + CHEMISTRY +BIOLOGY +MATHEMATICS + COMPUTER)/5.0;

    printf("\nPERCENTAGE = %.2f\n", PERCENTAGE);


    if(PERCENTAGE >= 90)

    {

        printf("\nGRADE A");

    }

    else if (PERCENTAGE >= 80)

    {

        printf("\nGRADE B");

    }

    else if (PERCENTAGE >= 70)

    {

        printf("\nGRADE C");

    }

    else if (PERCENTAGE >= 60)

    {
        printf("\nGRADE D");

    }

    else if (PERCENTAGE >= 40)

    {
        printf("\nGRADE E");

    }

    else

    {
        printf("\nGRADE F");

    }

        return(0);

}
