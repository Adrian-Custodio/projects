#include <stdio.h>

int main(void){
    int x = 0, y = 0;
    printf("Enter x: ");
    scanf("%i", &x);
    printf("Enter y: ");
    scanf("%i", &y);
    
    if (x < y){
        printf("X is less than Y\n");
    }
    else if (x > y){
        printf("X is greater than Y\n");
    }
    else{
        printf("X is equal to Y\n");
    }
    


}

/*
SWITCH

//some code to get user input

switch()
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


QUESTION MARK COLON/
TERNARY

int x;
if (expr)
{
    x = 5;
}
else
{
    x = 6;
}

//same with

int x = (expr) ? 5 : 6;





*/