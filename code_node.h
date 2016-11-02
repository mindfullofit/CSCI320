//
// Created by Mark G. on 11/1/2016.
//

#ifndef CODE_NODE_H
#define CODE_NODE_H

typedef const struct CodeNode{
        int row;
        char functionName[10];
        void (*functionPointer)(void);
    } CodeNode;

    typedef const struct CodeNode nodeLookup;
    typedef nodeLookup * NodePointer;

void processNode(int);
void presentNodes(void);
bool validateNode(int);
#endif //CODE_NODE_H
