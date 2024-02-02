#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to convert hexadecimal to decimal
int hexToDecimal(char hex[]) {
    int decimal = 0;
    int length = strlen(hex);

    // Iterate through each character in the hexadecimal string
    for (int i = 0; i < length; i++) {
        int digit;
        
        // Convert hexadecimal digit to decimal
        if (hex[i] >= '0' && hex[i] <= '9') {
            digit = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digit = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digit = hex[i] - 'a' + 10;
        } else {
            printf("Invalid hexadecimal digit '%c'\n", hex[i]);
            exit(1);
        }

        // Update the decimal value
        decimal += digit * pow(16, length - i - 1);
    }

    return decimal;
}

int main() {
    char hex[20];

    // Input hexadecimal number
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // Convert and print the decimal equivalent
    int decimal = hexToDecimal(hex);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
