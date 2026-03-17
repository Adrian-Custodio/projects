#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
char str[50];
printf("Before: ");
fgets(str, 50, stdin);
str[strcspn(str, "\n")] = '\0';

printf("After:  ");
for (int i = 0, n = strlen(str); i < n; i++)
{
    printf("%c", toupper(str[i]));
}
printf("\n");

}