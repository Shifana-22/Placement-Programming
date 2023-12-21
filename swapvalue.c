#include <stdio.h>

void swap(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y; 
    *x = *x - *y; 
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
