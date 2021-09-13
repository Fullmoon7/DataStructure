//function definition
#include"Linearlist.h"
List creatLinearlist(void)
{
	return NULL;
}

int linearlistLength(List Ptrl)
{
	List p = Ptrl;
	int count = 0;
	while (p)
	{
		count++;
		p = p->Next;
	}

	return count;
}

List findKth(int K, List Ptrl)
{
	if (K <= 0)
		return NULL;
	List p = Ptrl;
	int count = 1;
	while (count < K && p != NULL)
	{
		count++;
		p = p->Next;
	}
	return p;
}

List findElementX(Elementtype X, List Ptrl)
{
	List p = Ptrl;
	while (p != NULL && p->Data != X)
	{
		p = p->Next;
	}
	return p;
}

List insertElementX(Elementtype X, int i, List Ptrl)
{
	List p, n;
	int j = i;
	p = Ptrl;
	n = (List)malloc(sizeof(struct LNode));
	n->Data = X;
	if (j == 1)
	{
		n->Next = p;
		return n;
	}
	else
	{
		p = findKth(i - 1, p);
		if (p == NULL)
		{
			return NULL;
		}
		else
		{
			n->Next = p->Next;
			p->Next = n;
			return Ptrl;
		}
	}
}

List deleteKth(int K, List Ptrl)
{
	if (K <= 0)
		return NULL;
	List p, n;
	int k = K;
	p = Ptrl;
	if (p == NULL)
	{
		return NULL;
	}
	else if (k == 1)
	{
		n = p;
		n = n->Next;
		free(Ptrl);
		return n;
	}
	else
	{
		p = findKth(K - 1, p);
		if (p == NULL || p->Next == NULL)
		{
			return NULL;
		}
		else
		{
			n = p->Next;
			p->Next = n->Next;
			free(n);
			return Ptrl;
		}
	}
}