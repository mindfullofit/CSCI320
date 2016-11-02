// Example program #2 from Chapter 18 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter18ex2.c

/* This program is nothing more than a simple demonstration of the
getchar() function. */

// getchar() is defined in stdio.h, but string.h is needed for the
// strlen() function

#include "../sample_code.h"
void chap18ex2(void){
    int i;
    char msg[25];

    printf("Type up to 25 characters and then press Enter...\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar(); //Outputs a single character
        if (msg[i] == '\n')
        {
            i--;
            break;
        }
    }

    putchar('\n'); // One line break after the loop is done.
    for (; i >= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\n');
}

