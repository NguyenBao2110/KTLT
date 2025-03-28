#include <iostream>
using namespace std;
typedef struct
{
	int top;
	int count;
	int size;
	int* Arr;
}Stack;
void Init(Stack& s, int size)
{
	s.top = -1;
	s.count = 0;
	s.size = size;
	s.Arr = new int[s.size];
}
bool IsEmpty(Stack& s)
{
	return s.top == -1;
}
bool IsFull(Stack& s)
{
	return s.top == s.size - 1;
}
void Push(Stack& s, int x)
{
	s.top++;
	s.Arr[s.top] = x;
	s.count++;
}
int Pop(Stack& s)
{
	int x = s.Arr[s.top];
	s.top--;
	s.count--;
	return x;
}
void ChangeBase(int n, int base)
{
	Stack S;
	Init(S,100);
	int r = 0;
	while (n != 0)
	{
		r = n % base;
		Push(S, r);
		n = n / base;
	}
	while (!IsEmpty(S))
	{
		printf("%d",Pop(S));
	}
}
int main()
{
	int n, base;
	cout << "Nhap so n: "; cin >> n; cout << endl;
	cout << "Nhap co so(2<= base <=9): "; cin >> base; cout << endl;
	ChangeBase(n, base);
	return 0;
}