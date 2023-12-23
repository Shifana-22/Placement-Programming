#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generateCombinations(char *digits, int index, char *current, char **result, int *count) {
    if (index == strlen(digits)) {
        result[*count] = (char *)malloc(strlen(current) + 1);
        strcpy(result[*count], current);
        (*count)++;
        return;
    }

    int digit = digits[index] - '0';
    int len = strlen(mapping[digit]);
    for (int i = 0; i < len; i++) {
        current[index] = mapping[digit][i];
        generateCombinations(digits, index + 1, current, result, count);
    }
}

char **letterCombinations(char *digits, int *returnSize) {
    if (digits == NULL || strlen(digits) == 0) {
        *returnSize = 0;
        return NULL;
    }

    int totalCombinations = 1;
    int digitsLen = strlen(digits);
    for (int i = 0; i < digitsLen; i++) {
        int digit = digits[i] - '0';
        totalCombinations *= strlen(mapping[digit]);
    }

    char **result = (char **)malloc(sizeof(char *) * totalCombinations);
    int count = 0;
    char *current = (char *)malloc(digitsLen + 1);
    current[digitsLen] = '\0';

    generateCombinations(digits, 0, current, result, &count);
    *returnSize = count;
    free(current);
    return result;
}

int main() {
    char digits[100];
    printf("Enter a string of digits: ");
    fgets(digits, sizeof(digits), stdin);
    digits[strcspn(digits, "\n")] = '\0';
    int returnSize;
    char **combinations = letterCombinations(digits, &returnSize);
    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", combinations[i]);
        if (i != returnSize - 1) {
            printf(",");
        }
        free(combinations[i]);
    }
    printf("]\n");

    free(combinations);
    return 0;
}
