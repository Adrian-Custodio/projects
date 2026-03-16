#include <stdio.h>

int main(void)
{
int input;
printf("Enter number 5-1: ");
scanf("%i", &input);
    switch(input)
    {
    case 5:
        printf("Five, ");   //put break every after cases
    case 4:                 //so other cases won't run 
        printf("Four, ");   
    case 3: 
        printf("Three, ");
    case 2:
        printf("Two, ");
    case 1:
        printf("One, ");
    default:
        printf("Blast-off!\n");

}

}
