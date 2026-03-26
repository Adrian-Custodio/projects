#include <stdio.h>
#include <string.h>
//compare strings using strcmp()

int main(void)
{
char str[7][50];
//user inputs multiple strings
for (int i = 0; i < 7; i++)
{
    printf("Enter word number %i: ", i + 1);
    scanf("%s", str[i]);
}
//user input another string to compare to the previous inputs
char str2[50];
printf("Enter comparing word: ");
scanf("%s", str2);
int found = 0;

for (int i = 0; i < 7; i++)
{
    if (strcmp(str2, str[i]) == 0)
    {
        found = 1; 
        break;
    }

}

if (found)
{
    printf("Found!\n");
}
else
{
    printf("Not found!\n");
}

}
//just wanna try out the stringcmp() 
//also want to try getting input from user using 2d array 