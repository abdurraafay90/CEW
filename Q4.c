
void decimalToBinary(int decimal) {
    // Base case
    if (decimal == 0) {
        return;
    } else {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Please enter a non-negative decimal number.\n");
    } else if (decimalNumber == 0) {
        printf("Binary equivalent is 0\n");
    } else {
        printf("Binary equivalent is: ");
        decimalToBinary(decimalNumber);
        printf("\n");
    }

    return 0;
}
