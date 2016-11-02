// Example program #1 from Chapter 30 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter30ex1.c

/* The program is a simple demonstration of the difference between
global variables and local variables. */

#include "../sample_code.h"

int g1 = 10;
float g2 = 19.0;

void prAgain(void)
{
    int l2 = 5;

    // Can�t print l1--it is local to main
    printf("%d %.2f %d\n", l2, g2, g1);

    return;
}

void chap30ex1(void){
    float l1;

    l1 = 9.0;

    printf("%d %.2f\n", g1, l1); // prints the 1st global and first
    // local variable

    prAgain(); // calls our first function
}




