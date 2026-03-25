#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// sorry i did not follow the text instructions
// slash the hints
// i focused on the video instruction..

void cipher(long key, char str[]);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error!\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // convert argv[1] to long int
    long k = atol(argv[1]);

    // ask user for sentence to cipher
    printf("Enter your sentence: ");
    char str[200];
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")] = '\0'; //removes the newline
                                    //at the end of what the fgets get

    cipher(k, str);
}

void cipher(long key, char str[])
{
    // isalpha, isupper, islower
    //'A' == 'a' - 32
    //  A == 65; a == 97;
    //  'A' + k == cipher       <--- formula

    // cipheredText[i] = (plainText[i] + k) % 26;
    // convert ascii to alphabetical index first
    //'A' becomes 0, 'B' becomes 1, so on.. (minus 65 all)
    // proceed with formula, shift
    // then convert result back to ascii
    // notes from the vid..
    char cipheredText[200];

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (isalpha(str[i]))
        {
            if (isupper(str[i]))
            {
                int index = str[i] - 65;
                cipheredText[i] = (index + key) % 26;
                cipheredText[i] = cipheredText[i] + 65;
            }
            else if (islower(str[i]))
            {
                int index = str[i] - 97;
                cipheredText[i] = (index + key) % 26;
                cipheredText[i] = cipheredText[i] + 97;
            }
        }
        else
        {
            cipheredText[i] = str[i];
        }
    }
    cipheredText[strlen(str)] = '\0';
    printf("ciphertext:  %s\n", cipheredText);
}
