#include <stdio.h>
struct Passenger {
    char name[50];
    int age;
};
int main() {
    struct Passenger p;
    char source[30], destination[30];
 printf("=== Railway Reservation System ===\n");
printf("Enter Passenger Name: ");
    scanf("%s", p.name);
  printf("Enter Age: ");
    scanf("%d", &p.age);
 printf("Enter Source Station: ");
    scanf("%s", source);
 printf("Enter Destination Station: ");
    scanf("%s", destination);
 printf("\n--- Ticket Details ---\n");
    printf("Name        : %s\n", p.name);
    printf("Age         : %d\n", p.age);
    printf("From        : %s\n", source);
    printf("To          : %s\n", destination);
    printf("Status      : Confirmed\n");
return 0;
}
