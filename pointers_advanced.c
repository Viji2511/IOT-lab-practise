#include <stdio.h>
#include <string.h>

int main() {

  
     //  PART A: Integer Pointer Array
    

    int a = 10, b = 45, c = 23, d = 89, e = 56;
    int *ptr[5];   // Array of 5 integer pointers

    // Storing addresses of variables
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    ptr[3] = &d;
    ptr[4] = &e;

    printf("PART A: Integer Pointer Array\n");
    printf("--------------------------------\n");

    // Display values and addresses
    for (int i = 0; i < 5; i++) {
        printf("ptr[%d] -> Address: %p, Value: %d\n",
               i, ptr[i], *ptr[i]);
    }

    // Finding maximum value using pointers
    int *max = ptr[0];
    for (int i = 1; i < 5; i++) {
        if (*ptr[i] > *max) {
            max = ptr[i];
        }
    }

    printf("\nMaximum value = %d (Address: %p)\n\n", *max, max);

   
      // PART B: String Pointer Array
      

    char *students[5] = {
        "Ravi",
        "Anitha",
        "Suresh",
        "Karthik",
        "Divya"
    };

    printf("PART B: String Pointer Array\n");
    printf("--------------------------------\n");

    printf("Before Sorting:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", students[i]);
    }

    // Sorting strings alphabetically using pointers
    char *temp;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(students[i], students[j]) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nAfter Sorting:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", students[i]);
    }

    return 0;
}
//1.2 Pointer-to-Pointer Operations (Apply & Analyze Levels)
#include <stdio.h>

// Function using double pointer
void modifyArray(int **arr, int size) {
    for (int i = 0; i < size; i++) {
        **(arr + i) = **(arr + i) + 10;   // Modify original values
    }
}

int main() {
    int a = 5, b = 10, c = 15;
    int *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    printf("Before modification:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *ptr[i]);
    }

    modifyArray(ptr, 3);

    printf("\nAfter modification:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *ptr[i]);
    }

    return 0;
}
//1.3 function pointers (analyze level)
#include <stdio.h>

/* Function declarations */
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed\n");
        return 0;
    }
    return a / b;
}

int main() {
    int choice, a, b, result;

    /* Array of function pointers */
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};

    while (1) {
        printf("\n----- MENU DRIVEN CALCULATOR -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator...\n");
            break;
        }

        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        /* Calling function using function pointer */
        result = operations[choice - 1](a, b);

        printf("Result = %d\n", result);
    }

    return 0;
}
