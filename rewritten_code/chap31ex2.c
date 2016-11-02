// Example program #2 from Chapter 31 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter31ex2.c

/* The program demonstrates passing an array to a function. */

#include "../sample_code.h"

void change(char name[15]) // Recieves the value of i
{
    // Change the string stored at the address pointed to by name

    strcpy(name, "XXXXXXXXXXXXXX");

    return; // Returns to main
}

/******************************************************************/
/* Sometimes putting dividers like the one above is a nice break
between your different functions. */

void chap31ex2(void){
    char name[15] = "Michael Hatton";

    change(name);

    printf("Back in main(), the name is now %s.\n", name);
    return;
}
