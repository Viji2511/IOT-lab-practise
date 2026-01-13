/* Implement a program demonstrating: 
Part A:
•	Pointer Increment/Decrement 
•	Increment pointer to access next array element 
•	Observe address changes (+4 bytes for int on 32-bit system) 
Part B: 
•	Pointer-to-Pointer (Double Pointers) 
•	Declare int **pptr (pointer to pointer) 
•	Modify values through double pointer 
•	Demonstrate memory relationships 
Part C: 
•	Array Access via Pointers 
•	Access array elements without [] notation 
•	Use: *(ptr + i) instead of arr[i] 
•	Create function to find array length using pointers */

#include <stdio.h>

/* Function to find array length using pointers */
int findLength(int *start, int *end) {
    return (end - start);
}

int main() {

    printf("PART A: Pointer Increment / Decrement\n");
    printf("-------------------------------------\n");

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for(int i = 0; i < 5; i++) {
        printf("Value = %d, Address = %p\n", *ptr, ptr);
        ptr++;   // Move to next element
    }
    printf("\nPART B: Pointer to Pointer (Double Pointer)\n");
    printf("-------------------------------------------\n");

    int x = 100;
    int *p = &x;
    int **pptr = &p;

    printf("Value of x        = %d\n", x);
    printf("Value using *p    = %d\n", *p);
    printf("Value using **pptr= %d\n", **pptr);
    **pptr = 200;

    printf("\nAfter modifying via double pointer:\n");
    printf("x = %d\n", x);
    printf("\nMemory Relationship:\n");
    printf("Address of x   : %p\n", &x);
    printf("Value of p     : %p\n", p);
    printf("Address of p   : %p\n", &p);
    printf("Value of pptr  : %p\n", pptr);
    printf("\nPART C: Array Access Using Pointers\n");
    printf("-----------------------------------\n");

    int nums[] = {5, 15, 25, 35, 45};
    int *pnums = nums;
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Accessing array without [] operator:\n");

    for(int i = 0; i < size; i++) {
        printf("*(pnums + %d) = %d\n", i, *(pnums + i));
    }

    int length = findLength(&nums[0], &nums[size]);

    printf("\nArray length using pointers = %d\n", length);

    return 0;
}
