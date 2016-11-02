// Example program #1 from Chapter 10 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter10ex1.c
/* This program increases a counter from 1 to 5, printing updates
and then counts it back down to 1. */
#include "../sample_code.h"
void chap10ex1(void){
    int ctr = 0;
    ctr = ctr + 1; // increases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increases counter to 5
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decreases counter to 1
    printf("Counter is at %d.\n", ctr);
}