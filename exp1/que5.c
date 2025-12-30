#include <stdio.h>

int main() {
    int sensorID, count = 0;

    printf("Enter sensor ID: ");
    scanf("%d", &sensorID);

    while (sensorID != 0) {
        count++;
        sensorID /= 10;
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
