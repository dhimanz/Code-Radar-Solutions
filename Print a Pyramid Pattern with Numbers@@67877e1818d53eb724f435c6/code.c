#include <stdio.h>

int main() {
    int n;
   
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        // Print spaces before the numbers
        for (int j = 1; j <=  i; j++) {
        //     printf(" ");
        // }

        // // Print numbers in ascending order
        // for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d ", j);
            
        }

        printf("\n");
    }

    return 0;
}
