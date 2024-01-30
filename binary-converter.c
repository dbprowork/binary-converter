/*

Convert a single byte (8 bit) sequence to decimal, octal or hexadecimal

*/

#include <stdio.h>

// Take a binary sequence and convert it to decimal
int decimalConversion(void) {
    // Create array to hold the binary sequence
    int sequence[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    // Create array of values by position
    int values[8] = {128, 64, 32, 16, 8, 4, 2, 1};
    int tempDecimal = 0;
    int i;

    // Get binary sequence
    for (int i = 0; i < 8; i++) {
        scanf("%d", &sequence[i]);

        // Check if values are valid
        if (sequence[i] > 1) {
            printf("Invalid value.\n");
            
            return 0;
        }
    }

    // Check on/off and add value to total
    for (i = 0; i < 8; i++) {
        if (sequence[i] == 1) {
            tempDecimal += values[i];
        }
        else {
            continue;    
        }
    }

    // Return decimal value to main
    return tempDecimal;
}
