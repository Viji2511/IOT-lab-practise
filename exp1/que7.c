#include <stdio.h>

int main() {
    int num, temp, rev = 0, digit;

    printf("Enter packet number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (num == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
