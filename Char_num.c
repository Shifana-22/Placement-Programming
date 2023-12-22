#include <stdio.h>
struct CharAndNumber {
    char character;
    int number;
};
int main() {
    struct CharAndNumber array[10]; 
    printf("Enter alternating characters and numbers:\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            scanf(" %c", &array[i].character);
        } else {
            scanf("%d", &array[i].number);
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i += 2) {
        for (int j = 0; j < array[i + 1].number; j++) {
            printf("%c", array[i].character);
        }  
    }
    return 0;
}
