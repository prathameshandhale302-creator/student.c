#include 
<stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int *ptr = &num;

    printf("\nUsing the variable\n");
    printf("Value   = %d\n", num);
    printf("Address = %p\n", (void *)&num);

    printf("\nUsing the pointer\n");
    printf("Value   = %d\n", *ptr);
    printf("Address = %p\n", (void *)ptr);

    return 0;
}
