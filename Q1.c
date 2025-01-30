#include <stdio.h>

int main()
{
    int num, choice;

    printf("Select your choice:\n");
    printf("1. Check if the number is positive\n");
    printf("2. Check if the number is negative\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nEnter your number: ");
    scanf("%d", &num);

    switch (choice)
    {
    case 1:
        if (num > 0)
        {
            printf("%d is a positive number.\n", num);
        }
        else
        {
            printf("%d is not a positive number.\n", num);
        }
        break;

    case 2:
        if (num < 0)
        {
            printf("%d is a negative number.\n", num);
        }
        else
        {
            printf("%d is not a negative number.\n", num);
        }
        break;

    default:
        printf("Invalid choice! Please select 1 or 2.\n");
        break;
    }

    return 0;
}
