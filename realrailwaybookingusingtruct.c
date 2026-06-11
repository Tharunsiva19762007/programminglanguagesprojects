#include <stdio.h>
#include <string.h>
struct Passenger {
    int ticketNo;
    char name[50];
    int age;
};
struct Passenger p[100];
int count = 0;
int seats = 50;
void bookTicket() {
    if (seats == 0) {
        printf("\nNo seats available!\n");
        return;
    }
 p[count].ticketNo = count + 1;
 printf("\nEnter Name: ");
    scanf("%s", p[count].name);
printf("Enter Age: ");
    scanf("%d", &p[count].age);
seats--;
printf("\nTicket Booked Successfully!\n");
    printf("Ticket No: %d\n", p[count].ticketNo);

    count++;
}
void viewTickets() {
    int i;
if (count == 0) {
        printf("\nNo bookings found!\n");
        return;
    }
printf("\n--- Passenger List ---\n");
 for(i = 0; i < count; i++) {
        if(p[i].ticketNo != 0) {
            printf("\nTicket No : %d", p[i].ticketNo);
            printf("\nName      : %s", p[i].name);
            printf("\nAge       : %d\n", p[i].age);
        }
    }
}

void cancelTicket() {
    int ticket, i;
printf("\nEnter Ticket Number: ");
    scanf("%d", &ticket);

    for(i = 0; i < count; i++) {
        if(p[i].ticketNo == ticket) {
            p[i].ticketNo = 0;
            seats++;
            printf("\nTicket Cancelled Successfully!\n");
            return;
        }
    }

    printf("\nTicket Not Found!\n");
}

void checkSeats() {
    printf("\nAvailable Seats: %d\n", seats);
}
int main() {
    int choice;
while(1) {
        printf("\n\n===== RAILWAY RESERVATION SYSTEM =====");
        printf("\n1. Book Ticket");
        printf("\n2. View Tickets");
        printf("\n3. Cancel Ticket");
        printf("\n4. Check Available Seats");
        printf("\n5. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
switch(choice) {
            case 1: bookTicket(); break;
            case 2: viewTickets(); break;
            case 3: cancelTicket(); break;
            case 4: checkSeats(); break;
            case 5: return 0;
            default: printf("\nInvalid Choice!");
        }
    }

    return 0;
}
