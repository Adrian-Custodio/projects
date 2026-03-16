#include <stdio.h>



int main(void){
    char first_name[50], last_name[50];
    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("Enter last name: ");
    scanf("%s", last_name);

    printf("Hello, %s %s\n", first_name, last_name);
}




int main(void){
    int age;
    printf("Enter your birth year: ");
    scanf("%i", &age);
    age = 2026 - age;
    printf("You are %i years old!\n", age);

}


int main(void){
    printf("Enter your favourite number: ");
    int num; 
    scanf("%i", &num);
    num = num * 2;
    printf("Your favorite number doubled is %i!\n", num);
}


int main(void){
    char sentence[50];
    printf("Enter your sentence: ");
    fgets(sentence, 50, stdin);
    printf("You said: %s\n", sentence);


}


int main(void){
    char item_name[50];
    float price, total;
    printf("Enter item name: ");
    scanf("%s", item_name);
    printf("Enter it's price: ");
    scanf("%f", &price);
    total = price + (price * 0.10);
    printf("Item: %s\n", item_name);
    printf("Price: %.2f\n", price);
    printf("Total with 10 tax: %.2f\n", total);
}
