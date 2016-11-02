/* *
 * With the exception of this main.c, the code_node files, and the sample code header
 * all files are copies of the work found in C Programming: Absolute Beginner's Guide 3rd Edition.
 * All credit and copyright concerning those materials are due to the authors Greg Perry and Dean Miller
 *
 *
 * */

#include <stdio.h>
#include <stdbool.h>
#include "code_node.h"

int main(int argc, char *argv[])
{
    bool quit = false;

    while(!quit){
        int userChoice = -100; // Default to erroneous option
        char nLine;
        presentNodes();
        if(scanf("%d%c", &userChoice, &nLine) != 2 || nLine != '\n'){
            quit = true;
        }
        else{
            if(validateNode(userChoice)) processNode(userChoice);
            else quit = true;
        }
    }

    return 0;
}