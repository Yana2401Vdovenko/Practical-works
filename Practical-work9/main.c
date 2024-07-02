#include <stdio.h>

int minSteps(int x, int y) {
    int distance = y - x;
    int steps = 0;
    int total = 0;

    while (total < distance) {
        steps++;
        total += (steps + 1) / 2; // додаємо відстань, що дорівнює половині номеру кроку (заокруглено вгору)
    }

    return steps;
}

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    printf("Minimum steps from %d to %d: %d\n", x, y, minSteps(x, y));

    return 0;
}
