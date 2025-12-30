#include <stdio.h>

int main() {
    int batteryLevel;

    printf("Enter battery level: ");
    scanf("%d", &batteryLevel);

    if (batteryLevel < 20)
        printf("LOW POWER MODE\n");
    else
        printf("NORMAL MODE\n");

    return 0;
}
