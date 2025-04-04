#include <stdio.h>

#define SEC_NUM 10

void displaySeats(int seats[], int sec_num) {
    for(int i = 0; i < sec_num; i++) {
        printf("Section %d: %d seats\n", i + 1, seats[i]);
    }
}

int main() {
    int seats[SEC_NUM] = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int choice;

    printf("Welcome to the Section Registration System!\n");

    while(1) {

        printf("\nAvailable Seats:\n");
        displaySeats(seats, SEC_NUM);

        printf("\nEnter the section number you want to register for (1-%d, or 0 to exit): ", SEC_NUM);
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > SEC_NUM) {
            printf("Invalid section number! Please try again.\n");
            continue;
        }

        if (seats[choice - 1] > 0) {
            seats[choice - 1]--;
            printf("Registration successful! You have been registered for Section %d.\n", choice);
        } else {
            printf("Sorry, no seats available for Section %d.\n", choice);
        }
    }

return 0;
}
