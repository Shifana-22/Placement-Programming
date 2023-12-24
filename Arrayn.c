#include <stdio.h>
//N = 6, X = 16
//Arr[] = {1, 4, 45, 6, 10, 8}

int hasPairWithSum(int arr[], int n, int X) {
    
    int visited[100000] = {0};

    for (int i = 0; i < n; i++) {
        int complement = X - arr[i];
        if (visited[complement]) {
            return 1; // Pair found
        }
        visited[arr[i]] = 1;
    }

    return 0; 
}

int main() {
    int N, X;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    printf("Enter the target sum X: ");
    scanf("%d", &X);
    int Arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }
    if (hasPairWithSum(Arr, N, X)) {
        printf("Yes, sum is %d\n", X);
    } else {
        printf("No,sum is %d\n", X);
    }
    return 0;
}
