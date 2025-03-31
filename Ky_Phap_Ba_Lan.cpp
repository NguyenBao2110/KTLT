#include <iostream>
#include <string.h>
using namespace std;
typedef struct
{
	char top;
	int count;
	int size;
	char* Arr;
}Stack;
void Init(Stack& s, int size)
{
	s.top = -1;
	s.size = size;
	s.Arr = new char[s.size];
}
bool IsEmpty(Stack& s)
{
	return s.top == -1;
}
bool IsFull(Stack& s)
{
	return s.top == s.size;
}
void Delete(Stack& s)
{
	s.top = -1;
	s.size = 0;
	s.count = 0;
	delete[] s.Arr;
}
void Push(Stack& s, char x)
{
	s.top ++;
    s.Arr[s.top]= x;
	s.count++;
}
char Pop(Stack& s)
{
	char  x = s.Arr[s.top];
	s.top--;
	s.count--;
	return x;
}
int precedence(char op)
{
	if (op == '+' || op == '-') return 1;
	if (op == '*' || op == '/') return 2;
	if (op == '^') return 3;
	return 0;
}
bool isOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
bool isOperand(char c) 
{
	return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); 
}
string infixToPostfix(string infix)
{
	Stack s;
	Init(s, 255);
	string postfix = "";
	for (char c : infix)
	{
		if (isOperand(c)) {
			postfix += c; // Nếu là toán hạng, thêm vào hậu tố
		}
		else if (c == '(')
		{
			Push(s, c);
		}
		else if (c == ')')
		{
			while (!IsEmpty(s) && s.Arr[s.top] != '(')
			{
				postfix += Pop(s);
			}
			Pop(s);
		}
		else if (isOperator(c)) 
		{
			while (!IsEmpty(s) && precedence(s.Arr[s.top]) >= precedence(c)) {
				postfix += Pop(s);
			}
			Push(s,c);
		}	
	}
	while (!IsEmpty(s)) {
		postfix += Pop(s);
	}
	Delete(s);
	return postfix;
}
int main()
{
	char infix[255];
	cout << "Nhap bieu thuc trung to: ";
	//getline(cin, infix);
	fgets(infix, 255, stdin);
	string postfix = infixToPostfix(infix);
	cout << "Bieu thuc hau to: " << postfix << endl;

	return 0;
}	