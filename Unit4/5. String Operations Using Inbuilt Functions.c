#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 99
#define INPUT_SIZE (MAX_LENGTH + 2)

int read_string(const char *prompt, char str[])
{
    printf("%s", prompt);

    if (fgets(str, INPUT_SIZE, stdin) == NULL)
    {
        fprintf(stderr, "Could not read input.\n");
        return 0;
    }

    size_t length = strcspn(str, "\n");

    if (length > MAX_LENGTH)
    {
        fprintf(stderr, "Please enter at most %d characters.\n", MAX_LENGTH);
        return 0;
    }

    str[length] = '\0';
    return 1;
}

int main(void)
{
    char str1[INPUT_SIZE];
    char str2[INPUT_SIZE];
    char copy[MAX_LENGTH + 1];
    char reverse[MAX_LENGTH + 1];
    char combined[2 * MAX_LENGTH + 1];

    if (!read_string("Enter first string: ", str1) ||
        !read_string("Enter second string: ", str2))
    {
        return 1;
    }

    size_t length1 = strlen(str1);
    size_t length2 = strlen(str2);

    /* 5.1 Copy one string into another */
    strcpy(copy, str1);
    printf("\n5.1 Copy Operation:\n");
    printf("Copied string = %s\n", copy);

    /* 5.2 Reverse the first string */
    for (size_t i = 0; i < length1; i++)
    {
        reverse[i] = str1[length1 - 1 - i];
    }
    reverse[length1] = '\0';

    printf("\n5.2 Reverse Operation:\n");
    printf("Reverse of first string = %s\n", reverse);

    /* 5.3 Find the length of both strings */
    printf("\n5.3 Length Operation:\n");
    printf("Length of first string = %zu\n", length1);
    printf("Length of second string = %zu\n", length2);

    /* 5.4 Compare both strings */
    int result = strcmp(str1, str2);

    printf("\n5.4 Compare Operation:\n");
    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string comes before second string.\n");
    }
    else
    {
        printf("First string comes after second string.\n");
    }

    /* 5.5 Concatenate both strings */
    strcpy(combined, str1);
    strcat(combined, str2);

    printf("\n5.5 Concatenation Operation:\n");
    printf("Concatenated string = %s\n", combined);

    return 0;
}
