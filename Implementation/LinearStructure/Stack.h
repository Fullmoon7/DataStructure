/*
	description of abstract data type
	stack
*/
#define Elementtype int
typedef struct SNode *Stack;
struct SNode
{
    ElementType Data;
    Stack Next;
};

//operation set
Stack CreateStack(void);              //create a new blank Stack
bool isEmptyStack(Stack);             //judge whether a stack is empty,return 1/0
bool pushStack(Stack, ElementType X); //press an element into the stack
bool popStack(Stack);                 //pop the top element after deleting it from the stack
