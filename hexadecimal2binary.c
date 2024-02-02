#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert hexadecimal to binary
void hexToBinary(char hex[]) {
    int i = 0;

    // Iterate through each character in the hexadecimal string
    while (hex[i]) {
        char binary[5];
        binary[4] = '\0';  // Null-terminate the binary string

        switch (hex[i]) {
            case '0': strcpy(binary, "0000"); break;
            case '1': strcpy(binary, "0001"); break;
            case '2': strcpy(binary, "0010"); break;
            case '3': strcpy(binary, "0011"); break;
            case '4': strcpy(binary, "0100"); break;
            case '5': strcpy(binary, "0101"); break;
            case '6': strcpy(binary, "0110"); break;
            case '7': strcpy(binary, "0111"); break;
            case '8': strcpy(binary, "1000"); break;
            case '9': strcpy(binary, "1001"); break;
            case 'A': case 'a': strcpy(binary, "1010"); break;
            case 'B': case 'b': strcpy(binary, "1011"); break;
            case 'C': case 'c': strcpy(binary, "1100"); break;
            case 'D': case 'd': strcpy(binary, "1101"); break;
            case 'E': case 'e': strcpy(binary, "1110"); break;
            case 'F': case 'f': strcpy(binary, "1111"); break;
            default:
                printf("Invalid hexadecimal digit '%c'\n", hex[i]);
                exit(1);
        }

        // Print the binary equivalent for each hexadecimal digit
        printf("%s", binary);
        i++;
    }

    printf("\n");
}

int main() {
    char hex[20];

    // Input hexadecimal number
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // Convert and print the binary equivalent
    printf("Binary equivalent: ");
    hexToBinary(hex);

    return 0;
}
