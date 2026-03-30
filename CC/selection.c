#include <stdio.h>
// hardcoded everything
// just tried selection sort

void selection(int arr[]);

int main(void)
{
printf("Array: ");
int arr[11] ={ 10, 9, 5, 88, 34, 0, 2999, 99, 7, 500, 3009};
for (int i = 0; i < 11; i++)
{
    printf("%i ", arr[i]);
}
printf("\n");
printf("\n");
int size = 11;
selection(arr);

printf("Sorted array: \n");
for (int i = 0; i < 11; i++)
{
    printf("%i ", arr[i]);
}
printf("\n");

}











void selection(int arr[])
{
for (int i = 0; i < 11; i++)
{
    int min_index = i;
    for (int j = i + 1; j < 11; j++)
    {
        if (arr[j] < arr[min_index])
        {
            min_index = j;
        }
    }

    if (min_index != i)
    {
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

}

