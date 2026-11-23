#include <stdio.h>

int main(void)
{
    int num;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\nValues\n");
    printf("Using variable       = %d\n", num);
    printf("Using pointer        = %d\n", *ptr);
    printf("Using double pointer = %d\n", **dptr);

    printf("\nAddresses\n");
    printf("Address of num (&num)        = %p\n", (void *)&num);
    printf("Address stored in ptr        = %p\n", (void *)ptr);
    printf("Address of ptr (&ptr)        = %p\n", (void *)&ptr);
    printf("Address stored in dptr       = %p\n", (void *)dptr);

    return 0;
}
