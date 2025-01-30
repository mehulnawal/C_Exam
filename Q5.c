// Develop a C program that defines a structure representing a house (with attributes like room_quantity, established_year, and city). List N number of house' details using Array of objects.

#include <stdio.h>
#define total_house 100

struct house
{
    int room_quantity;
    int established_year;
    char city[50];
};

int no_house;

struct house house_array[total_house];

// add houses
void add_house();

// display houses
void display_house();

int main()
{
    add_house();
    display_house();
    return 0;
}

void add_house()
{
    printf("Enter number of houses: ");
    scanf("%d", &no_house);

    if (no_house > 0 && no_house <= total_house)
    {
        for (int i = 0; i < no_house; i++)
        {
            printf("\nEnter details for house %d", i + 1);

            printf("\nRoom Quantity: ");
            scanf("%d", &house_array[i].room_quantity);

            printf("Established year: ");
            scanf(" %d", &house_array[i].established_year);

            printf("City: ");
            scanf(" %[^\n]", house_array[i].city);
        }
    }
    else
    {
        printf("House quantity cannot be more than 100 and less than 0");
    }
}

void display_house()
{
    for (int i = 0; i < no_house; i++)
    {
        printf("\nThe details for house %d", i + 1);
        printf("\n Room quantity: %d", house_array[i].room_quantity);
        printf("\n Established year:  %d", house_array[i].established_year);
        printf("\n City: %s", house_array[i].city);
    }
}