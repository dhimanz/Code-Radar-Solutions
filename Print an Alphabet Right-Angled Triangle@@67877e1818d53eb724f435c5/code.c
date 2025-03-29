// Your code here...
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows (starting from n)
        for (int j = 1; j <= i; j++) {  // Print numbers from 1 to i
            printf("%c", j);
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
