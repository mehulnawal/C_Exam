// Write a C program that defines a function to reverse a 3 digit number.
#include <stdio.h>

int reverseNumber(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10;
        reversed = reversed + num % 10;
        num /= 10;
    }
    return reversed;
}

int main()
{
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
    {
        printf("Reversed number: %d\n", reverseNumber(num));
    }
    else
    {
        printf("Please enter a valid 3-digit number.\n");
    }

    return 0;
}
