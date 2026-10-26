#include <stdio.h>

int main() { int arr[100]; int n; int i; int sum = 0;

printf("Enter the number of elements: ");
scanf("%d", &n);

if (n < 1 || n > 100)
{
    printf("Invalid number of elements!\n");
    return 1;
}

printf("Enter %d elements:\n", n);

for (i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
}

printf("Sum of array elements = %d\n", sum);

return 0;


}
