#include <stdio.h>

void calculateTime(int totalDays) {
    int years, weeks, days;
    years = totalDays / 365; 
    totalDays = totalDays % 365; 
    weeks = totalDays / 7; 
    days = totalDays % 7;
    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", weeks);
    printf("Number of Days: %d\n", days);
}

int main() {
    int totalDays;
    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);
    calculateTime(totalDays);
    return 0;
}
