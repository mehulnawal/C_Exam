//  Create a C program to find the smallest element in an 1D array.

#include <stdio.h>

int main()
{
    int arr[3], sm;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sm = arr[0];

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        if (sm < arr[0])
        {
            sm = arr[i];
        }
    }

    printf("The smallest number in the array is: %d", sm);
}