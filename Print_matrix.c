#include <stdio.h>  
int main() {  
   int i, j;  
   int a[3][3];
   printf("Enter the elements of matrix: \n");  
   for (i = 0; i < 3; i++) {  
      for (j = 0; j < 3; j++) {  
         scanf("%d", &a[i][j]);  
      }  
   }  
    printf("\n");
   for (i = 0; i < 3; i++) {  
      for (j = 0; j < 3; j++) {  
         printf("%d\t", a[i][j]);  S
      }
      printf("\n");
   }  
}
