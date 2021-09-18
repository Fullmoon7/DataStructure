/*
	description of abstract data type
	linear list
*/
#define Elementtype int
typedef struct LNode *List;
struct LNode
{
	Elementtype Data;
	List Next;
};

//operation set
List creatLinearlist(void);						 //creat an empty linearlist
int linearlistLength(List);						 //return the length of the list
List findKth(int K, List);						 //return the Kth element point
List findElementX(Elementtype X, List);			 //return element point of value X
List insertElementX(Elementtype X, int i, List); //insert element of value x to the ith position
List deleteKth(int K, List);					 //deleth the kth element
