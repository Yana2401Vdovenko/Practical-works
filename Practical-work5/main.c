#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    if (n < 1 || n > 10000) {
        printf("Invalid input\n");
        return 1;
    }

    // Dynamic programming arrays
    int dp0[n+1], dp1[n+1], dp2[n+1];

    // Base cases
    dp0[1] = 1;
    dp1[1] = 1;
    dp2[1] = 0;

    if (n >= 2) {
        dp0[2] = 2;
        dp1[2] = 1;
        dp2[2] = 1;
    }

    // Fill dp arrays
    for (int i = 3; i <= n; ++i) {
        dp0[i] = (dp0[i-1] + dp1[i-1] + dp2[i-1]) % MOD;
        dp1[i] = dp0[i-1];
        dp2[i] = dp1[i-1];
    }

    // Total valid sequences of length n
    int result = (dp0[n] + dp1[n] + dp2[n]) % MOD;

    // Output the result
    printf("Number of searched sequences: %d\n", result);

    return 0;
}


