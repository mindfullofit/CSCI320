//
// Created by Mark G. on 11/1/2016.
//
#include <stdio.h>
#include <stdbool.h>
#include "sample_code.h"
#include "code_node.h"

/* Lookup Table will use names of chapter exercises for functionPointer */
nodeLookup lookupTable[] = {
        {1,"chap02ex1",chap02ex1},
        {2,"chap02ex2",chap02ex2},
        {3,"chap03ex1",chap03ex1},
        {4,"chap04ex1",chap04ex1},
        {5,"chap04ex2",chap04ex2},
        {6,"chap05ex1",chap05ex1},
        {7,"chap06ex1",chap06ex1},
        {8,"chap07ex1",chap07ex1},
        {9,"chap08ex1",chap08ex1},
        {10,"chap08ex2",chap08ex2},
        {11,"chap09ex1",chap09ex1},
        {12,"chap09ex2",chap09ex2},
        {13,"chap09ex3",chap09ex3},
        {14,"chap10ex1",chap10ex1},
        {1,"chap10ex2",chap10ex2},
        {2,"chap11ex1",chap11ex1},
        {3,"chap11ex2",chap11ex2},
        {4,"chap11ex3",chap11ex3},
        {5,"chap12ex1",chap12ex1},
        {6,"chap12ex2",chap12ex2},
        {7,"chap13ex1",chap13ex1},
        {8,"chap13ex2",chap13ex2},
        {9,"chap14ex1",chap14ex1},
        {10,"chap14ex2",chap14ex2},
        {11,"chap15ex1",chap15ex1},
        {12,"chap16ex1",chap16ex1},
        {13,"chap16ex2",chap16ex2},
        {14,"chap17ex1",chap17ex1},
        {1,"chap17ex2",chap17ex2},
        {2,"chap18ex1",chap18ex1},
        {3,"chap18ex2",chap18ex2},
        {4,"chap19ex1",chap19ex1},
        {5,"chap19ex2",chap19ex2},
        {6,"chap20ex1",chap20ex1},
        {7,"chap20ex2",chap20ex2},
        {8,"chap21ex1",chap21ex1},
        {9,"chap22ex1",chap22ex1},
        {10,"chap22ex2",chap22ex2},
        {11,"chap23ex1",chap23ex1},
        {12,"chap23ex2",chap23ex2},
        {13,"chap24ex1",chap24ex1},
        {14,"chap25ex1",chap25ex1},
        {1,"chap26ex1",chap26ex1},
        {2,"chap27ex1",chap27ex1},
        {3,"chap27ex2",chap27ex2},
        {4,"chap28ex1",chap28ex1},
        {5,"chap28ex2",chap28ex2},
        {6,"chap28ex3",chap28ex3},
        {7,"chap29ex1",chap29ex1},
        {8,"chap29ex2",chap29ex2},
        {9,"chap30ex1",chap30ex1},
        {10,"chap31ex1",chap31ex1},
        {11,"chap31ex2",chap31ex2},
        {12,"chap31ex3",chap31ex3},
        {13,"chap31ex4",chap31ex4},
        {14,"chap32ex1",chap32ex1}
};

const static int lookupTableLength = sizeof(lookupTable) / sizeof(*lookupTable);

void processNode(int intChoice){
    NodePointer pt = &lookupTable[intChoice];
    if(intChoice < lookupTableLength){
        printf("\n************* Output of %s **************************\n", pt->functionName);
        pt->functionPointer();
        printf("\n************* EOF Output **********************************\n\n");
    }
    return;
}

void presentNodes(void){
    NodePointer pt;
    int c;
    int i;

    printf("Please select a program to execute and press Enter.\n"
                   "Any invalid choice will terminate this program.\n"
                   "Here are your options:\n");

    for(i = 1; i < 15; i++) {
        for (c = 0; c < lookupTableLength; c++) {
            pt = &lookupTable[c];
            if(pt->row == i){
                printf("%d) %s\t\t", c, pt->functionName);
            }
        }
        printf("\n");
    }
    printf("Your choice: ");
}

bool validateNode(int userChoice){
    if ( (userChoice >= 0) && (userChoice < lookupTableLength)){
        return true;
    }
    return false;
}
