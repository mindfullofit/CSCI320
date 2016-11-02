// Example program #1 from Chapter 26 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter26ex1.c

/* The program looks for a number of random integers, allocates an
array and fills it with numbers between 1 and 500 and then loops
through all the numbers and figures out the smallest, the biggest,
and the average. It then frees the memory. */

#include "../sample_code.h"
void chap26ex1(void){
    int i, aSize;

    int * randomNums;

    time_t t;

    double total = 0;
    int biggest, smallest;
    float average;

    srand(time(&t));

    printf("How many random numbers do you want in your array? ");
    scanf(" %d", &aSize);

    // Allocate an array of integers equal to the number of
    // elements requested by the user

    randomNums = (int *) malloc(aSize * sizeof(int));

    // Test to ensure that the array allocated properly

    if (!randomNums)
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }

    // Loops through the array and assigns a random
    // number between 1 and 500 to each element

    for (i = 0; i < aSize; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
    }

    // Initialize the biggest and smallest number
    // for comparison's sake

    biggest = 0;
    smallest = 500;

    // Loop through the now-filled array
    // testing for the random numbers that
    // are biggest, smallest, and adding all
    // numbers together to calculate an average

    for (i = 0; i < aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }

        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }

    average = ((float)total)/((float)aSize);

    printf("The biggest random number is %d.\n", biggest);
    printf("The smallest random number is %d.\n", smallest);
    printf("The average of the random numbers is %.2f.\n", average);

    // When you use malloc, remember to then use free
    free(randomNums);
}
