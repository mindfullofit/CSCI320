// Example program #1 from Chapter 27 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter27ex1.c

/* The program gets the bookInfo structure by including bookInfo.h
and asks the user to fill in three structures and then prints them.
*/

//First include the file with the structure definition

#include "bookinfo.h"
#include "../sample_code.h"
void chap27ex1(void){
    int ctr;
    struct bookInfo books[3]; // Array of three structure variables

    // Get the information about each book from the user
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("What is the name of the book #%d?\n", (ctr+1));
        gets(books[ctr].title);
        puts("Who is the author? ");
        gets(books[ctr].author);
        puts("How much did the book cost? ");
        scanf(" $%f", &books[ctr].price);
        puts("How many pages in the book? ");
        scanf(" %d", &books[ctr].pages);
        getchar(); //Clears last newline for next loop
    }

    // Print a header line and then loop through and print the info

    printf("\n\nHere is the collection of books: \n");

    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s by %s", (ctr+1), books[ctr].title,
               books[ctr].author);
        printf("\nIt is %d pages and costs $%.2f", books[ctr].pages,
               books[ctr].price);
        printf("\n\n");
    }
}