//function definition
#include "Stack.h"
Stack CreateStack(void)
{
    Stack newStack;
    newStack = (Stack)malloc(sizeof(struct SNode));
    newStack->Next = NULL;
    return newStack;
}

bool isEmptyStack(Stack SPtr)
{
    return (SPtr->Next == NULL);
}

bool pushStack(Stack SPtr, ElementType X)
{
    Stack newNode;
    newNode = (Stack)malloc(sizeof(struct SNode));
    newNode->Data = X;
    newNode->Next = SPtr->Next;
    SPtr->next = newNode;
    return true;
}