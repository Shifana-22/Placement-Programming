#include <stdio.h>
#include <stdbool.h>
/*A password is said to be strong if it satisfies the following criteria: 
It contains at least one lowercase English character. 
It contains at least one uppercase English character. 
It contains at least one special character. 
The special characters are: !@#$%^&*()-+ 
Its length is at least 8.
It contains at least one digit. Given a string, find its strength.
*/
bool hasLowerCase(char password[]) {
for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            return true; 
        }
    }
}
bool hasUpperCase(char password[]) {
for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            return true; 
        }
    }
}
bool hasDigit(char password[]) {
for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            return true; 
        }
    }
}
bool hasSpecialChar(char password[]) {
    char specialChars[] = "!@#$%^&*()-+"; 
    int length = strlen(specialChars);
    for (int i = 0; password[i] != '\0'; i++) {
        for (int j = 0; j < length; j++) {
            if (password[i] == specialChars[j]) {
                return true; 
            }
        }
    }
    return false; 
}
int main() {
    char passwrd[20];
    printf("Enter your password: ");
    scanf("%s", passwrd);
    
    if(strlen(passwrd)>=8)
    {
      if(hasLowerCase(passwrd))
      {
          if(hasUpperCase(passwrd))
          {
              if(hasDigit(passwrd))
              {
                  if (hasSpecialChar(passwrd))
                  {
                      printf("Password is strong");
                  }
                  else
                  {
                      printf("Password must contain atleast 1 special character");
                      printf("\nPassword is weak");
                  }
              }
              else
              {
                  printf("Password must contain atleast 1 digit");
                  printf("\nPassword is weak");
              }
          }
          else
          {
              printf("Password must contain atleast 1 uppercase alphabet");
              printf("\nPassword is weak");
          }
      }
      else
      {
          printf("Password must contain atleast 1 lowercase alphabet");
          printf("\nPassword is weak");
      }
    }
    else
    {
        printf("Invalid password length");
        printf("\nPassword is weak");
    }
    return 0;
}
