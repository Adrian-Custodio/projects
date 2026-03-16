#include <cs50.h>
#include <stdio.h>

int checksum(long num);

int main(void)
{
    // get user input
    long credit = get_long("Number: ");

    // 34 or 37, All American Express
    // 51, 52, 53, 54, 55 MasterCard
    // 4, Visa

    if (checksum(credit) != 0)
    {
        printf("INVALID\n");
    }
    else if (credit / 1000000000000000 == 4 || credit / 1000000000000 == 4)
    {
        printf("VISA\n");
    }
    else if (credit / 10000000000000 == 34 || credit / 10000000000000 == 37)
    {
        printf("AMEX\n");
    }
    else if (credit / 100000000000000 >= 51 && credit / 100000000000000 <= 55)
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int checksum(long num)
{
    int total = 0;    // sum for all digits
    int position = 1; // rightmost

    while (num > 0)
    {
        int last_digit = num % 10; // extract rightmost

        if (position % 2 == 0) // even pos
        {
            int doubled = last_digit * 2;

            if (doubled > 9)
            {
                total += doubled % 10; // get last digit
                total += doubled / 10; // get first digit
            }
            else
            {
                total += doubled; // if only 1 digit, add normally
            }
        }
        else // odd pos
        {
            total += last_digit; // add as is
        }
        position++; // move to next pos
        num /= 10;  // chop rightmost
    }

    return total % 10; // 0 == valid, else invalid
}
