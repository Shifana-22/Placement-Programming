#include <stdio.h>
int is_anagram(char a[], char b[]) {
  int i = 0;
  int freq_a[26] = {0}; 
  int freq_b[26] = {0};
  // converting uppercase to lowercase and updating frequency
  while (a[i] != '\0') {
    if (a[i] >= 'A' && a[i] <= 'Z') {
      a[i] = 'a' + (a[i] - 'A');
    }
    freq_a[a[i] - 'a']++;
    i++;
  }
  // converting uppercase to lowercase and updating frequency
  i = 0;
  while (b[i] != '\0') {
    if (b[i] >= 'A' && b[i] <= 'Z') {
      b[i] = 'a' + (b[i] - 'A');
    }
    freq_b[b[i] - 'a']++;
    i++;
  }
  // if the frequency of all 26 characters is same for both strings it returns 1 else returns 0.
  for (i = 0; i < 26; i++) {
    if (freq_a[i] != freq_b[i]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  char a[50], b[50];
  printf("Enter first string : ");
  scanf("%s", a); 
  printf("Enter second string : ");
  scanf("%s", b); 
  if (is_anagram(a, b) == 1) {
    printf("True");
  } else {
    printf("False");
  }
  return 0;
}
