#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int* getMax(int *a, int *b) {
    static int max;
    max = (*a > *b) ? *a : *b;
    return &max;
}
void reverseArray(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int findMax(int *arr, int n) {
    int *ptr = arr;
    int max = *ptr;

    for (int i = 1; i < n; i++) {
        ptr++;
        if (*ptr > max)
            max = *ptr;
    }
    return max;
}
void swapElements(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {

    /* ----- PART A ----- */
    int x = 10, y = 20;
    printf("PART A: Pass by Reference\n");
    printf("Before Swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap : x = %d, y = %d\n\n", x, y);

    /* ----- PART B ----- */
    int a = 25, b = 40;
    int *maxPtr;

    printf("PART B: Returning Pointer from Function\n");
    maxPtr = getMax(&a, &b);
    printf("Maximum value = %d\n\n", *maxPtr);

    /* ----- PART C ----- */
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("PART C: Pointer Parameters Modifying Arrays\n");

    printf("Original Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    reverseArray(arr, n);

    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    int max = findMax(arr, n);
    printf("\nMaximum Element: %d\n", max);

    swapElements(&arr[0], &arr[n-1]);

    printf("After Swapping First & Last: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
