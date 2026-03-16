#include <stdio.h>


int main(void)
{
//make sure height is within 1-8
int height;

do{
printf("Enter height: ");
scanf("%i", &height);
} while (height < 1 || height > 8);

//height is within 1-8

//row
for (int row = 1; row <= height; row++)
{
    //lead spaces
    for (int space = 0; space < height - row; space++)
    {
        printf(" ");
    }
    // left
    for (int col = 0; col < row; col++)
    {
        printf("#");
    }
    // middle space
    printf("  ");

    // right
    for (int col = 0; col < row; col++)
    {
        printf("#");
    }
    printf("\n");
}

}
