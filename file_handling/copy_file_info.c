#include <stdio.h>

int main()
{
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL)
    {
        printf("Unable to create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
