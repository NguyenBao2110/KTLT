#include <iostream>
using namespace std;

typedef struct
{
	int front;
	int rear;
	int count;
	int size;
	int* Arr;
}Queue;
void Init(Queue& q, int size)
{
	q.front = -1;
	q.rear = -1;
	q.size = size;
	q.Arr = new int[q.size];
}
void Delete(Queue& q)
{
	q.front = q.rear = -1;
	q.count = 0;
	q.size = 0;
	delete[] q.Arr;
}
bool IsEmpty(Queue& q)
{
	return q.front == -1;
}
bool IsFull(Queue& q)
{
	return (q.rear - q.front+1 == 0) || (q.rear - q.front+1 == q.size );
}
void EnQueue(Queue& q, int x)
{
	if (q.front == -1)
		q.front = 0;
	q.rear++;
	if (q.rear == q.size)
		q.rear = 0;
	q.Arr[q.rear] = x;
	q.count++;
}
int DeQueue(Queue& q)
{
	int x = q.Arr[q.front];
	if (q.front == q.rear)
	{
		q.front = -1;
		q.rear = -1;
	}
	else
	{
		q.front++;
		if (q.front == q.size)
			q.front = 0;
	}
	q.count--;
	return x;
}
int main()
{
	Queue Q;
	int n; cin >> n;
	Init(Q, n);
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