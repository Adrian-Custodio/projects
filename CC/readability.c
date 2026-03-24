#include <stdio.h>
#include <string.h>
#include <ctype.h> //assess if it is a letter
#include <math.h> //for rounding 

int calculate(char *str);

int main(void)
{
char sentence[200];
printf("Enter your sentence: ");
fgets(sentence, 200, stdin);
sentence[strcspn(sentence, "\n")] = '\0';

int grade = calculate(sentence);
if(grade > 16)
{
    printf("Grade 16+\n");
}
else if (grade < 1)
{
    printf("Before Grade 1\n");
}
else
{
    printf("Grade %i\n", grade);
}

}


int calculate(char *str)
{
//isalpha() checks if a character is a letter
//islower() lowercase letter
//isupper() uppercase
//isblank checks if a character is a space or tab
//ispunct() checks if punctuation character
//isspace() checks if a whitespace character
int letters = 0;
int number_of_words = 1;
int number_of_sentence = 0;

for (int i = 0, n = strlen(str); i < n; i++)
{
    if(isalpha(str[i]))
    {
        letters++;
    }
    else if (isspace(str[i]))
    {
        number_of_words++;
    }
    else if (str[i] == '.' || str[i] == '!' || str[i] == '?')
    {
        number_of_sentence++;
    }


}

float index = 0, L = 0, S = 0;
L = ((float)letters / number_of_words) * 100;
S = ((float)number_of_sentence / number_of_words) * 100;
index = 0.0588 * L - 0.296 * S - 15.8;

return round(index);

}