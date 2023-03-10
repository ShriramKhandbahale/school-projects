#include <stdio.h>

#include "../include/globals.h"
// #include "../include/getters.h"

void print_home_menu()
{
    print_format_line();
    printf("\n[1] View Dashboard\n");
    printf("[2] Reservation\n");
    printf("[3] Inquiry\n");
    printf("[0] Exit\n");
    print_format_line();
}

void open_dashboard()
{
    char c;
    FILE *ptrR = fopen("data/trains/dashboard.txt", "r");

    c = fgetc(ptrR);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(ptrR);
    }
}

void print_reservation_menu()
{
    print_format_line();
    printf("\n[1] Book Ticket\n");
    printf("[2] Cancel Reservation\n");
    printf("[0] <-- Go Back:\n");
    print_format_line();
}
