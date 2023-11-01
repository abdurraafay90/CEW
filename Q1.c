#include <stdio.h>

int main(){
    int id;
    float rate,hrs;
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    printf("Enter Hours worked in a Month: ");
    scanf("%f", &hrs);
    printf("Enter Amount recieved per hour: ");
    scanf("%f", &rate);
    float salary = hrs*rate;
    printf("The Salary of Employee %d is $%.2f", id, salary);
    return 0;

}