//Write a C program to check whether an alphabet is vowel or consonant using switch case

#include <stdio.h>

int main(void)

{
    char CHARACTER;

    printf("C PROGRAM TO CHECK WHETHER AN ALPHABET IS VOWEL OR CONSONANT USING SWITCH CASE\n");

    printf("------------------------------------------------------------------------------\n");

    printf("ENTER AN ALPHABET : ");
    scanf("%c", &CHARACTER);
    
    switch(CHARACTER)
    {
        case 'a':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'e':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'i':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'o':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'u':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'A':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'E':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'I':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'O':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        case 'U':
            printf("\n%c IS A VOWEL", CHARACTER);
            break;

        default:
            printf("\n%c IS A CONSONANT", CHARACTER);
            break;
    }

    return(0);


}       