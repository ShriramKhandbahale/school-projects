#ifndef RESERVATION_H
#define RESERVATION_H

void book_ticket();

void passenger_details(int);

void add_to_list(char[20], char[6], int);
void print_list(int);

void write_ticket(int, int, int *, int, char[15], char[15], int, int);

int get_ticket_no();

#endif