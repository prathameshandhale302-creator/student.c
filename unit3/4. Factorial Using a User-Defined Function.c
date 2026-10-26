#include <stdio.h>

long int factorial(int n) { int i; long int fact = 1;

for (i = 1; i <= n; i++)
{
    fact = fact * i;
}

return fact;


}

int main() { int num; long int result;

printf("Enter a number: ");
scanf("%d", &num);

if (num < 0 || num > 20)
{
    printf("Please enter a number between 0 and 20.\n");
    return 1;
}

result = factorial(num);

printf("Factorial of %d = %ld\n", num, result);

return 0;


}
