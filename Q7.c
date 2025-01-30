// Print a below pattern using nested for loop in C language:
// 100
// 81 81
// 64 64 64
// 49 49 49 49
// 36 36 36 36 36

#include <stdio.h>

int main()
{
    int number = 10;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i;j++)
        {
            printf("%3d", number * number);
        }
        printf("\n");
        number--;
    }

    return 0;
}