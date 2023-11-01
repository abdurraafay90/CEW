#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n) {
    if (n < 1) {
        printf("Invalid input. Please enter a positive integer greater than 0.\n");
        return;
    }

    printf("Fibonacci Series up to %d: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    printFibonacciSeries(n);

    return 0;
}