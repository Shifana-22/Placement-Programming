#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter three distinct values: ");
    scanf("%d %d %d", &x, &y, &z);
    // If y is the middle value
    if ((x < y && y < z) || (z < y && y < x)) {
        printf("\n 2"); 
    // If x is the middle value
    } else if ((y < x && x < z) || (z < x && x < y)) {
        printf("\n 1"); 
    // If z is the middle value
    } else {
        printf("\n 3"); 
    }
    return 0;
}
