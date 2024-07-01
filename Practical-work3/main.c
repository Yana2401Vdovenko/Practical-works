#include <stdio.h>

// Function to calculate the number of r-digit numbers with conditions
int countNumbers(int r) {
    if (r == 1)
        return 2; // Numbers 5 and 9 with one digit

    // Initialize dynamic array to store results
    int dp[r + 1][2];
    dp[1][0] = 1; // One number 5 with one digit
    dp[1][1] = 1; // One number 9 with one digit

    // Calculate values for each digit count from 2 to r
    for (int i = 2; i <= r; i++) {
        dp[i][0] = dp[i-1][1]; // Last digit is 9
        dp[i][1] = dp[i-1][0] + dp[i-1][1]; // Last digit is 5 or 9
    }

    // Return the sum of the counts for the last digit being 5 and 9
    return dp[r][0] + dp[r][1];
}

// Main function for testing
int main() {
    int r;
    printf("Enter the number of digits r (r<30): ");
    scanf("%d", &r);

    if (r < 1 || r > 30) {
        printf("Invalid value for digits. The digit count must be between 1 and 30.\n");
        return 1;
    }

    int result = countNumbers(r);
    printf("Number of numbers with %d digits: %d\n", r, result);

    return 0;
}
