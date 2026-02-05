/*
Write a program that uses a switch-case statement to determine whether an entered
character is a vowel or a consonant. The program should also validate (using if-else)
the input to ensure that only alphabetic characters are processed. If the input is a number
or a special symbol, the program should indicate that the input is not an alphabetic
character.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    /* Validate whether input is an alphabet */
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        /* Check for vowel or consonant using switch-case */
        switch (ch)
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("The character '%c' is a Vowel.\n", ch);
                break;

            default:
                printf("The character '%c' is a Consonant.\n", ch);
        }
    }
    else
    {
        printf("The input '%c' is not an alphabetic character.\n", ch);
    }

    return 0;
}
