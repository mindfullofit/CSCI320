// Example program #3 from Chapter 31 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter31ex3.c

/* The program demonstrates passing a variable to a function by address.
*/

#include "../sample_code.h"

void halfPtr (int *i) // Receives the address of i
{
    *i = *i / 2;

    printf("Your value halved is %d.\n", *i);

    return; // Returns to main

}

void chap31ex3(void){
    int i;

    printf("Please enter an integer... ");
    scanf(" %d", &i);

    // Now call the half function, passing the address of i

    halfPtr(&i);

    // Shows that the function did alter i's value

    printf("In main(), i is now %d.\n", i);
    return;
}
