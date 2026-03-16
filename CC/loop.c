#include <stdio.h>
/*
int main(void){
int i = 0;
do{
    printf("Enter number: ");
    scanf("%i", &i);
} while (i < 0);

while (i > 0){
    printf("Sal\n");
    i--;
}
}

void meow(int n);

int main(void){
int num;
printf("Enter how many meows: ");
scanf("%i", &num);
meow(num);

}


void meow(int  n){
    for (int i = 0; i < n; i++){
    printf("meow\n");
}
}



int main(void){

    const int n = 3;
//for each row
for (int i = 0; i < n; i++){
    //for each column
    for (int j = 0; j < n; j++){
        //print one brick
        printf("#");

    }
    printf("\n");
}

}

*/

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
// output of this code
//       #  #
//      ##  ##
//     ###  ###
//    ####  ####
//   #####  #####
//  ######  ######
// #######  #######
//########  ########
