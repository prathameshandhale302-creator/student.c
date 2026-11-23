#include <stdio.h>

int main(void)
{
    FILE *file;
    int ch;
    int lastChar = '\n';
    size_t lines = 0;

    file = fopen("text.txt", "r");
    if (file == NULL)
    {
        fprintf(stderr, "Unable to open text.txt.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }

        lastChar = ch;
    }

    if (ferror(file))
    {
        fprintf(stderr, "An error occurred while reading text.txt.\n");
        fclose(file);
        return 1;
    }

    if (lastChar != '\n')
    {
        lines++;
    }

    fclose(file);

    printf("Number of lines in the file = %zu\n", lines);

    return 0;
}
