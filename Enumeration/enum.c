#include <stdio.h>

// Enum declaration
enum DayOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// Function to print the name of the day
void printDay(enum DayOfWeek day) {
    switch(day) {
        case Monday:
            printf("Monday\n");
            break;
        case Tuesday:
            printf("Tuesday\n");
            break;
        case Wednesday:
            printf("Wednesday\n");
            break;
        case Thursday:
            printf("Thursday\n");
            break;
        case Friday:
            printf("Friday\n");
            break;
        case Saturday:
            printf("Saturday\n");
            break;
        case Sunday:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
}

int main() {
    // Declare variables of type DayOfWeek
    enum DayOfWeek today, tomorrow;

    // Assign values to the variables
    today = Wednesday;
    tomorrow = (today + 1) % 7;

    // Print the names of the days
    printf("Today is ");
    printDay(today);
    printf("Tomorrow is ");
    printDay(tomorrow);

    return 0;
}
