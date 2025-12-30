#include <stdio.h>

int main() {
    int value;

    while (1) {
        printf("Enter a value (-1 to stop): ");
        scanf("%d", &value);

        if (value == -1)
            break;

        printf("You entered: %d\n", value);
    }

    printf("Program terminated.\n");
    return 0;
}
