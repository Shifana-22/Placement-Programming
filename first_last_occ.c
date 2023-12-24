#include <stdio.h>
//n=9, x=7
//1, 3, 5, 5, 5, 5, 7, 123, 125 
void first_and_last_occurrences(int arr[], int n, int x, int *first_index, int *last_index) {
    *first_index = -1;
    *last_index = -1;

    // Binary search for the first occurrence
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            *first_index = mid;
            right = mid - 1;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Binary search for the last occurrence
    left = 0;
    right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            *last_index = mid;
            left = mid + 1;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}

int main() {
    int num, i, x;
    printf("Enter the array size:\n");
    scanf("%d", &num);
    int arr[num];
    
    for (i = 0; i < num; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search for:");
    scanf("%d", &x);

    int first, last;

    first_and_last_occurrences(arr, num, x, &first, &last);

    if (first != -1 && last != -1) {
        printf("First occurrence of %d is at index %d\n", x, first);
        printf("Last occurrence of %d is at index %d\n", x, last);
    } else {
        printf("The number %d is not found in the array.\n", x);
    }

    return 0;
}
