#include <stdio.h>

int main() {
    int i, j, rows, space;

    // Taking input from the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for number of rows
    for (i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (space = 1; space <= rows - i; ++space) {
            printf(" ");
        }
        
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
/*
Output: 
    *
   ***
  *****
 *******
*********
*/
