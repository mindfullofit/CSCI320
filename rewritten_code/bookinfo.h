// Example program #A from Chapter 27 of Absolute Beginner's Guide
// to C, 3rd Edition
// File bookinfo.h
// This header file defines a structure for information about a book

struct bookInfo {
    char title[40];
    char author[25];
    float price;
    int pages;
};
