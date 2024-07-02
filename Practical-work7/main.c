#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    double distance, sum_radii, diff_radii;

    // Input coordinates and radii of two circles
    printf("Enter the coordinates and radius of the first circle (x1, y1, r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("Enter the coordinates and radius of the second circle (x2, y2, r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    // Calculate distance between the centers of the circles
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Sum and difference of the radii
    sum_radii = r1 + r2;
    diff_radii = fabs(r1 - r2);

    // Determine the number of intersection points
    if (distance == 0 && r1 == r2) {
        // Circles coincide
        printf("-1\n");
    } else if (distance > sum_radii || distance < diff_radii) {
        // Circles do not intersect
        printf("0\n");
    } else if (distance == sum_radii || distance == diff_radii) {
        // One intersection point
        printf("1\n");
    } else {
        // Two intersection points
        printf("2\n");
    }

    return 0;
}

