// Your code here...
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1;i<=n;j++) {  // Loop for rows (starting from n)
        for (int j = 1; j <= n-1; j++){printf(" ");}for(int j=1;j<=(2*i-1);++j){  // Print numbers from 1 to i
            printf("%c ",'A'+j-1);
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
