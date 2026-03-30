#include <stdio.h>
#include <string.h>

int factorial(int n);

int main(void)
{
int num;
printf("Enter a positive integer: ");
scanf("%i", &num);

if (num < 0)
{
    printf("Number cannot be nagative.\n");
    return 0;
}
printf("Factorial of %i is %i!\n", num, factorial(num));

}

int factorial(int n) {
    // base case
    if (n == 0) {
        return 1;
    }
    // recursive case
    return n * factorial(n - 1);
}