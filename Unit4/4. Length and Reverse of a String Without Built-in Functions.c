#include
<stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");

    if (fgets(str, sizeof str, stdin) == NULL)
    {
        return 1;
    }

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    printf("\nLength of the string = %d\n", length);
    printf("Reverse of the string = ");

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
