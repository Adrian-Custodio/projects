#include <stdio.h>

int main(void)
{
char name[50];
printf("Enter your name: ");
fgets(name, 50, stdin);
int n = 0;

while (name[n] != '\0')
{
    n++;
}
printf("%i\n", n);

}