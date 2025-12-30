#include <stdio.h>

int main() {
    int n, i = 0;
    float sum = 0, value;

    printf("Enter number of sensor readings: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Enter reading %d: ", i + 1);
        scanf("%f", &value);
        sum += value;
        i++;
    }

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / n);

    return 0;
}
