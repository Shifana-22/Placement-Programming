#include <stdio.h>
int main() {
    int totalHoursNeeded, numberOfDays, numberOfWorkers;
    printf("Enter total hours needed,number of days,and number of workers:\n");
    scanf("%d",&totalHoursNeeded);
    scanf("\n%d",&numberOfDays);
    scanf("\n%d",&numberOfWorkers);
    
    // 10% training days deduction
    int workingDays = numberOfDays - (numberOfDays * 0.1); 
    // Normal working hours
    int normalWorkHours = workingDays * numberOfWorkers * 8; 
    // Overtime hours
    int overtimeHours = workingDays * numberOfWorkers * 2; 
    
    int totalHoursAvailable = normalWorkHours + overtimeHours;

    if (totalHoursAvailable >= totalHoursNeeded) {
        int hoursLeft = totalHoursAvailable - totalHoursNeeded;
        printf("Yes! %d hours left.\n", hoursLeft);
    } else {
        int additionalHoursNeeded = totalHoursNeeded - totalHoursAvailable;
        printf("Not enough time! %d hours needed.\n", additionalHoursNeeded);
    }

    return 0;
}
