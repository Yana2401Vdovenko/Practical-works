#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double length;

    // Input coordinates
    printf("Enter the coordinates of the starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the ending point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Calculate the length of the vector
    length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the result with precision up to six decimal places
    printf("%.6f\n", length);

    return 0;
}

