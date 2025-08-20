#include <stdio.h>

int main()
{
    FILE *file;
    char ch;

    // Open file in read mode
    file = fopen("source.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read and display contents
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
