// •	Create a program that simulates a simple train ticket booking system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TICKETS 100

// Structure to store train details
typedef struct {
    int train_no;
    char train_name[50];
    char source[50];
    char destination[50];
    int seats_available;
} Train;

// Structure to store ticket details
typedef struct {
    int ticket_id;
    char passenger_name[50];
    int train_no;
} Ticket;

// Global variables
Train trains[] = {
    {101, "Express A", "City X", "City Y", 50},
    {102, "Express B", "City Y", "City Z", 40},
    {103, "Express C", "City Z", "City X", 30}
};

Ticket tickets[MAX_TICKETS];
int ticket_count = 0;

// Function to display available trains
void displayTrains() {
    printf("\nAvailable Trains:\n");
    printf("---------------------------------------------------\n");
    printf("Train No | Train Name  | Source  | Destination | Seats\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%d   | %s | %s  | %s  | %d\n",
               trains[i].train_no,
               trains[i].train_name,
               trains[i].source,
               trains[i].destination,
               trains[i].seats_available);
    }
}

// Function to book a ticket
void bookTicket() {
    if (ticket_count >= MAX_TICKETS) {
        printf("\nBooking full! No more tickets can be booked.\n");
        return;
    }

    int train_no;
    char passenger_name[50];

    printf("\nEnter Train Number: ");
    scanf("%d", &train_no);

    int found = -1;
    for (int i = 0; i < 3; i++) {
        if (trains[i].train_no == train_no) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("\nInvalid Train Number! Please try again.\n");
        return;
    }

    if (trains[found].seats_available <= 0) {
        printf("\nNo seats available on this train.\n");
        return;
    }

    printf("Enter Passenger Name: ");
    scanf("%s", passenger_name);

    // Booking the ticket
    tickets[ticket_count].ticket_id = ticket_count + 1;
    strcpy(tickets[ticket_count].passenger_name, passenger_name);
    tickets[ticket_count].train_no = train_no;
    ticket_count++;

    // Reduce available seats
    trains[found].seats_available--;

    printf("\nTicket Booked Successfully! Ticket ID: %d\n", ticket_count);
}

// Function to display booked tickets
void viewTickets() {
    if (ticket_count == 0) {
        printf("\nNo tickets booked yet.\n");
        return;
    }

    printf("\nBooked Tickets:\n");
    printf("-----------------------------\n");
    printf("Ticket ID | Passenger Name | Train No\n");
    printf("-----------------------------\n");

    for (int i = 0; i < ticket_count; i++) {
        printf("%d   | %s  | %d\n",
               tickets[i].ticket_id,
               tickets[i].passenger_name,
               tickets[i].train_no);
    }
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n=== Train Ticket Booking System ===\n");
        printf("1. View Trains\n");
        printf("2. Book Ticket\n");
        printf("3. View Booked Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displayTrains();
            break;
        case 2:
            bookTicket();
            break;
        case 3:
            viewTickets();
            break;
        case 4:
            printf("\nThank you for using the Train Ticket Booking System!\n");
            exit(0);
        default:
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}

pending project
