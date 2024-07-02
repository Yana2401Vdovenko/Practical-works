#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * (b / gcd(a, b)));
}

int main() {
    int p;
    printf("Enter the number of integers: ");
    scanf("%d", &p);

    if (p <= 2 || p >= 20) {
        printf("The number of integers must be between 2 and 20.\n");
        return 1;
    }

    int numbers[p];
    printf("Enter %d natural numbers: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Least common multiple: %d\n", result);

    return 0;
}
