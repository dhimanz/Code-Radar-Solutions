#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        // Print spaces before the numbers
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers in increasing order with spaces in between
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Print each number followed by a space
        }
        
        printf("\n");  // New line after each row
    }

    return 0;
}
