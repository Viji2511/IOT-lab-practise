/* Write a program that demonstrates: 
•	Declaration of pointers to different data types 
•	Displaying address and value of variables using pointers 
•	Understanding relationship between variables and their pointers
•	Creating visual memory address mapping for 5 different variables */

#include <stdio.h>

int main() {

    int    a = 10;
    float  b = 3.14;
    double c = 99.99;
    char   d = 'X';
    long   e = 123456;

    int    *pA = &a;
    float  *pB = &b;
    double *pC = &c;
    char   *pD = &d;
    long   *pE = &e;

    printf("VARIABLE  ADDRESS        VALUE        POINTER       VALUE USING POINTER\n");
    printf("---------------------------------------------------------------\n");

    printf("a (int)    %p   %d        %p      %d\n", &a, a, pA, *pA);
    printf("b (float)  %p   %.2f     %p      %.2f\n", &b, b, pB, *pB);
    printf("c (double) %p   %.2lf    %p      %.2lf\n", &c, c, pC, *pC);
    printf("d (char)   %p   %c        %p      %c\n", &d, d, pD, *pD);
    printf("e (long)   %p   %ld      %p      %ld\n", &e, e, pE, *pE);

    printf("\nRelationship Demonstration:\n");
    printf("Address of a  : %p\n", &a);
    printf("Pointer pA    : %p\n", pA);
    printf("Value at pA   : %d\n", *pA);

    printf("\nVisual Memory Mapping:\n");
    printf("----------------------\n");
    printf("Address %p -> a (int)    -> %d\n", pA, *pA);
    printf("Address %p -> b (float)  -> %.2f\n", pB, *pB);
    printf("Address %p -> c (double) -> %.2lf\n", pC, *pC);
    printf("Address %p -> d (char)   -> %c\n", pD, *pD);
    printf("Address %p -> e (long)   -> %ld\n", pE, *pE);

    return 0;
}
