#include <stdio.h>
void print_largest_array(int *arr, int size) {
    int firstlargest = arr[0];
    int secondlargest = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > firstlargest) {
            secondlargest = firstlargest;
            firstlargest = arr[i];
        } else if ((arr[i] < firstlargest) && ((secondlargest == -1) || (arr[i] > secondlargest))) {
            secondlargest = arr[i];
        }
    }
    if (secondlargest != -1) {
        printf(" %d\n", secondlargest);
    } else {
        printf("No second largest distinct element found.\n");
    }
}

int main() {
    int n, i;
    printf("Enter the array size:");
    scanf("%d", &n);
    int array[n]; 
    for (i = 0; i < n; i++) {
        printf("Enter the element %d: ", i);
        scanf("%d", &array[i]);
    }
    int size = sizeof(array) / sizeof(array[0]);

    print_largest_array(array, size);

    return 0;
}
