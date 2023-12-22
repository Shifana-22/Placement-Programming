#include <stdio.h>
#include <stdlib.h>

void printDuplicates(int arr[], int size) {
    int i = 0;
    while (i < size) {
        int count = 1;
        while ((i + 1) < size && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        if (count > 1) {
            printf("%d->%d, ", arr[i], count);
        }
        i++;
    }
}
int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int *array = (int *)malloc(N * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    printf("Sample Output:\n");
    printDuplicates(array, N);
    free(array); 
    return 0;
}
