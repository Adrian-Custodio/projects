#include <stdio.h>

int fib(int n);

int main(void)
{
int num;
printf("Enter number: ");
scanf("%i", &num);

printf("%i\n", fib(num));


}
int fib(int n)
{
if (n == 0)
{
    return 0;
}
if (n == 1)
{
    return 1;
}

return fib(n - 1) + fib(n - 2);

}