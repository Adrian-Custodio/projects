#include <stdio.h>
#include <string.h>
//no ctype header
int main(void)
{
char str[50];
printf("Enter string: ");
fgets(str, 50, stdin);
str[strcspn(str, "\n")] = '\0'; // remove newline from fgets

for (int i = 0, n = strlen(str); i < n; i++)
{
    //if str[i] is lowecase
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        printf("%c", str[i] - 32);
    }
    else 
    {
        printf("%c", str[i]);
    }
}
printf("\n");
}