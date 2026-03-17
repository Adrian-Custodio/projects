#include <stdio.h>

float average(int numbers[], int size);

int main(void)
{
int total = 0;
printf("Enter how many scores: ");
scanf("%i", &total);
int score[total];
for (int i = 0; i < total; i++)
{
    printf("Enter score: ");
    scanf("%i", &score[i]);
}
printf("%.2f\n", average(score, total));

}

float average(int numbers[], int size)
{
    float total = 0;
    for (int i = 0; i < size; i++)

    {
        total += numbers[i];
    }
    return total / size;

}