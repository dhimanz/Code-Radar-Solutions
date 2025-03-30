#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime numbers

    int i = 2;
    while (i * i <= n) {  // Loop till square root of n
        if (n % i == 0) return 0; // Not prime
        i++;
    }
    return 1; // Prime
}

int main() {
    int num;
    
    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking prime and printing result as 1 (Prime) or 0 (Not Prime)
    printf("%d\n", isPrime(num));
    
    return 0;
}
