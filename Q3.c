#include <stdio.h>

void main(){
    float height;
    printf("Enter Height in Centimetres: ");
    scanf("%f",&height);
    if (height < 150){
        printf("Dwarf");
    }
    else if (height == 150){
        printf("Average");
    }
    else if (height>=165){
        printf("Tall");
    }
    else {
        printf("Neither Dwarf nor Tall");
    }
}