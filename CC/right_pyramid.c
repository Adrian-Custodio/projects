#include <stdio.h>

int main(void)
{
int height;

do{
printf("Enter height: ");
scanf("%i", &height);
} while(height < 1 || height > 8);

//row
for(int row = 1; row <= height; row++)
{
    //column
    for (int column = 0; column < row; column++)
    {
        printf("#");
    }
    printf("\n");
}


}

