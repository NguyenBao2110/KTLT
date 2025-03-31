#include <iostream>
using namespace std;
typedef struct node
{
	int info;
	struct node* next;
}Node;
typedef struct
{
	node* front;
	node* rear;
	int count;
}Queue;
void Init(Queue& q)
{
	q.front = q.rear = NULL;
	q.count = 0;
}
Node* CreateNode(int x)
{
	Node* p = new Node;
	p->info = x;
	p->next = NULL;
	return p;
}
bool IsEmpty(Queue &q)
{
	return q.front == NULL;
}
void Delete(Queue &q)
{
	while (q.front!=NULL)
	{
		Node* p = q.front;
		q.front = q.front->next;
		delete p;
	}
	q.count=0;
}
void EnQueue(Queue& q, int x)
{
	Node* p = CreateNode(x);
	if (q.front == NULL)
		q.front = p;
	else
	{
		q.rear->next = p;
	}
	q.rear = p;
	q.count++;
}
int DeQueue(Queue& q)
{
	Node* p = q.front;
	int x = p->info;
	q.front = p->next;
	if (q.front == NULL)
	{
		q.rear = NULL;
	}
	p->next = NULL;
	q.count--;
	return x;
}
int main()
{
	Queue Q;
	int n; cin >> n;
	Init(Q);
	for (int i = 0; i < n; i++)
	{
		EnQueue(Q, i);
	}
	while (!IsEmpty(Q))
	{
		cout << DeQueue(Q);
	}
	return 0;
}
