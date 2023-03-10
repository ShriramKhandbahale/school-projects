#include <stdio.h>
#include <stdlib.h>

#include "include/globals.h"
#include "include/menus.h"
#include "include/reservation.h"

int main()
{
HOME:
    clear();
    print_home_menu();
    printf("\nEnter your choice (0-3): ");
    char choice;
    scanf(" %c", &choice);

    switch (choice)
    {
    case '1':
        clear();
        open_dashboard();
        printf("\nGo back [<--]: ");
        while ((getchar()) != '\n')
            ;
        getchar();
        goto HOME;
        break;
    case '2':
        clear();
        print_reservation_menu();
        printf("\nEnter your choice (0-3): ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '1':
            clear();
            book_ticket();
            break;
        case '2':
            // todo cancel
            break;
        default:
            break;
        }
        break;
    case '3':
        // todo inquiry
        break;
    case '0':
        exit(1);
        break;

    default:
        break;
    }
}