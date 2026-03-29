#include <stdio.h>
#include <string.h>
//tried defining struct

typedef struct
{
    char name[50];
    int number;
} person;

int main(void)
{
int n = 0;
printf("How many person? ");
scanf("%i", &n);
    
person persons[n];
for (int i = 0; i < n; i++)
{
    printf("Enter person number %i name: ", i + 1);
    scanf("%s", persons[i].name);
    printf("Enter person number %i votes: ", i + 1);
    scanf("%i", &persons[i].number);
}
for (int i = 0; i < n; i++)
{
    printf("%s has %i votes.\n", persons[i].name, persons[i].number);
}
return 0;
}