#include <stdio.h>

int main()
{
    char name[50];
    int seats;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\nTicket Booking Details\n");
    printf("Customer Name : %s\n", name);
    printf("Seats Booked  : %d\n", seats);
    printf("Booking Successful!\n");

    return 0;
}