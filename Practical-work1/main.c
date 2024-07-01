#include <stdio.h>

int main() {

    double t1, t2, t3;

    printf("Enter three numbers t1, t2, t3: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double rate = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    double total_time = 1.0 / rate;

    printf("Time required to eat the pie: %.2f hours\n", total_time);

    return 0;
}
