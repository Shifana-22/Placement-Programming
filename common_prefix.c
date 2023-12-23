#include <stdio.h>
#include <string.h>
// Function to find the longest common prefix
char* longestCommonPrefix(char strs[][50], int strsSize) {
    if (strsSize == 0) {
        static char empty[] = "";
        return empty;
    }
    char *prefix = strs[0];
    int len = strlen(prefix);
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        len = (len < j) ? len : j;
        prefix[j] = '\0';
    }
    if (len == 0) {
        static char empty[] = "";
        return empty;
    }
    prefix[len] = '\0';
    return prefix;
}

int main() {
    char strings[100][50]; 
    int numStrings;
    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    printf("Enter %d strings:\n", numStrings);
    for (int i = 0; i < numStrings; i++) {
        scanf("%s", strings[i]);
    }
    char *result = longestCommonPrefix(strings, numStrings);
    if (strcmp(result, "") == 0) {
        printf("''''\n");
    } else {
        printf("Longest common prefix: %s\n", result);
    }
    
    return 0;
}
