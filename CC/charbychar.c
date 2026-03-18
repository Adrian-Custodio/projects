#include <stdio.h>
#include <string.h>

int main(void)
{

char str[50];
printf("Enter string: ");
fgets(str, 50, stdin);
str[strcspn(str, "\n")] = '\0';
int n = strlen(str);

//print every index
for (int i = 0; i < n; i++ )
{
    printf("%c", str[i]);
}
printf("\n");

//print reverse
for (int j = n - 1; j >= 0; j--)
{
    printf("%c", str[j]);
}
printf("\n");
}