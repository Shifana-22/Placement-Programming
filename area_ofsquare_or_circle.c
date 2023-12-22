#include <stdio.h>
int main() {
    float radius,area;
    int side,areasq;
    char shapetype;
    printf("Shape =");
    scanf("%c", &shapetype);
switch (shapetype) {
    case 'S':
        printf("Size =");
        scanf("%d", &side);
        areasq=side * side;
        printf("Area of Square = %d\n",areasq);
        break;
    case 'C':
        printf("Size =");
        scanf("%f", &radius);
        area=3.14159 * 
        radius * radius;
        printf("Area of Circle =%.2f\n",area);
        break;
}
    return 0;
}
