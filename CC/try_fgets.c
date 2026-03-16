#include <stdio.h>

int main(void){
    char sentence[50];
    printf("Enter your sentence: ");
    fgets(sentence, 50, stdin);
    printf("You said: %s\n", sentence);

}