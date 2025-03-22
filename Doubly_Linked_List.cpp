#include <iostream>
using namespace std;
struct Node {
	int Info;
	struct Node* next;
	struct Node* prev;
};

typedef struct Node* node;

struct DoubleListInt {
	node pHead;
	node pTail;
};

void init(DoubleListInt& list)
{
	list.pHead = list.pTail = NULL;
}

bool isEmty(DoubleListInt& list)
{
	return list.pTail == NULL;
}

node CreateNode(int x)
{
	node p = new Node;
	p->Info = x;
	p->next = NULL;
	p->prev = NULL;
	return p;
}

DoubleListInt MakeData(int a[], int n)
{
	DoubleListInt list;
	init(list);
	printf("%d\n", n);
	if (n > 0) {
		node p = CreateNode(a[0]);
		list.pHead = list.pTail = p;
		for (int i = 1; i < n; i++)
		{
			p = CreateNode(a[i]);
			list.pTail->next = p;
			p->prev = list.pTail;
			list.pTail = p;
		}

	}
	return list;
}

void Showlist(DoubleListInt list)
{
	for (node p = list.pHead; p != NULL; p = p->next)
	{
		printf("%d ", p->Info);
	}
}

void test1()
{
	printf("---TEST1---\n");
	int a[] = { 2,5,8,10 }, n = 4;
	DoubleListInt list1;
	init(list1);
	if (isEmty(list1) == true)
	{
		printf("Danh sach rong!\n");
	}
	else
	{
		printf("Danh sach khac rong!\n");
	}
	list1 = MakeData(a, n);
	printf("Danh sach: "); Showlist(list1);
	printf("\n");
}

int main()
{
	test1();

	return 0;
}