#include <stdio.h>

void main(){
    float height,width;
    printf("Enter Height of Rectangle: ");
    scanf("%f", &height);
    printf("Enter Width of Rectangle: ");
    scanf("%f", &width);
    float area = width*height;
    float perimeter = 2*(width+height);
    printf("The Area of Rectangle= %f", area);
    printf("The Perimeter of Rectangle= %f", perimeter);
}