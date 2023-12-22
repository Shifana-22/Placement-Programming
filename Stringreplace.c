#include <stdio.h>
#include <string.h>

void justifySentence(char sentence[], int screenLength) {
    int length = strlen(sentence);
    int spaces = 0;

    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            spaces++;
        }
    }

    int totalSpaces = screenLength - length + spaces;
    int spacesBetweenWords = spaces > 0 ? totalSpaces / spaces : 0;
    int extraSpaces = spaces > 0 ? totalSpaces % spaces : 0;

    for (int i = 0; i < length; i++) {
        if (sentence[i] != ' ') {
            printf("%c", sentence[i]);
        } else {
            int count = spacesBetweenWords;
            while (count > 0) {
                printf("*");
                count--;
            }
            if (extraSpaces > 0) {
                printf("*");
                extraSpaces--;
            }
        }
    }
}

int main() {
    char sentence[100];
    int screenLength;
    printf("Sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; 
    printf("Screenlength: ");
    scanf("%d", &screenLength);
    getchar();
    justifySentence(sentence, screenLength);
    printf("\n");

    return 0;
}
