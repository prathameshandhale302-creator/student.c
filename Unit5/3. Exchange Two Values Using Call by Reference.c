#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main(void)
{
    int num1, num2;

    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\nBefore swapping\n");
    printf("First number  = %d\n", num1);
    printf("Second number = %d\n", num2);

    swap(&num1, &num2);

    printf("\nAfter swapping\n");
    printf("First number  = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
