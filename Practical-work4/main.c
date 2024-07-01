#include <stdio.h>

int main() {
    int n;
    do {
        printf("Enter a natural number n (1 < n < 150): ");
        scanf("%d", &n);
        if (n < 1 || n > 150) {
            printf("The entered number does not meet the condition. Please try again.\n");
        }
    } while (n < 1 || n > 150);

    int count = 0;
    for (int m = 1; m <= n; ++m) {
        if (n % m == 0) {
            count++;
        }
    }

    printf("The number of exact divisors of %d: %d\n", n, count);
    return 0;
}
