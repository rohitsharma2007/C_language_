// •	Write a switch-case program that takes the first letter of a country name and prints the full name (e.g.:- "I" ? "India").

#include <stdio.h>

int main()
{
    char letter;
    printf("Enter the first letter of a country: ");
    scanf(" %c", &letter);

    switch (letter)
    {
    case 'A':
    case 'a':
        printf("Argentina\n");
        break;
    case 'B':
    case 'b':
        printf("Brazil\n");
        break;
    case 'C':
    case 'c':
        printf("Canada\n");
        break;
    case 'D':
    case 'd':
        printf("Denmark\n");
        break;
    case 'E':
    case 'e':
        printf("Egypt\n");
        break;
    case 'F':
    case 'f':
        printf("France\n");
        break;
    case 'G':
    case 'g':
        printf("Germany\n");
        break;
    case 'H':
    case 'h':
        printf("Hungary\n");
        break;
    case 'I':
    case 'i':
        printf("India\n");
        break;
    case 'J':
    case 'j':
        printf("Japan\n");
        break;
    case 'K':
    case 'k':
        printf("Kenya\n");
        break;
    case 'L':
    case 'l':
        printf("Luxembourg\n");
        break;
    case 'M':
    case 'm':
        printf("Mexico\n");
        break;
    case 'N':
    case 'n':
        printf("Netherlands\n");
        break;
    case 'O':
    case 'o':
        printf("Oman\n");
        break;
    case 'P':
    case 'p':
        printf("Pakistan\n");
        break;
    case 'Q':
    case 'q':
        printf("Qatar\n");
        break;
    case 'R':
    case 'r':
        printf("Russia\n");
        break;
    case 'S':
    case 's':
        printf("Spain\n");
        break;
    case 'T':
    case 't':
        printf("Turkey\n");
        break;
    case 'U':
    case 'u':
        printf("United States\n");
        break;
    case 'V':
    case 'v':
        printf("Vietnam\n");
        break;
    case 'W':
    case 'w':
        printf("Wales\n");
        break;
    case 'X':
    case 'x':
        printf("No country found with 'X'\n");
        break;
    case 'Y':
    case 'y':
        printf("Yemen\n");
        break;
    case 'Z':
    case 'z':
        printf("Zimbabwe\n");
        break;
    default:
        printf("Invalid input or no country available with this letter.\n");
        break;
    }

    return 0;
}
