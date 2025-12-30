#include <stdio.h>

int main() {
    int sensorValue;

    printf("Enter sensor value: ");
    scanf("%d", &sensorValue);

    if (sensorValue >= 10 && sensorValue <= 80)
        printf("Sensor value is within safe range.\n");
    else
        printf("Sensor value is outside safe range.\n");

    return 0;
}
