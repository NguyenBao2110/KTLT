//#include <iostream>
//using namespace std;
//
//typedef struct node
//{
//	int info;
//	struct node* next;
//}Node;
//typedef struct
//{
//	Node* top;
//	int  count;
//}Stack;
//void init(Stack& s)
//{
//	s.top = NULL;
//	s.count = 0;
//}
//Node* CreateNode(int x)
//{
//	Node* p = new Node;
//	p->info = x;
//	p->next = NULL;
//	return p;
//}
//bool IsEmpty(Stack& s)
//{
//	return s.top == NULL;
//}
//void Delete(Stack &s)
//{
//	while (s.top != NULL)
//	{
//		Node *p = s.top;
//		s.top = s.top->next;
//	}
//	s.count = 0;
//}
//void Push(Stack& s, int x)
//{
//	Node* p = CreateNode(x);
//	p->next = s.top;
//	s.top = p;
//	s.count++;
//}
//int Pop(Stack& s)
//{
//	int x = s.top->info;
//	Node* p = s.top;
//	s.top = p->next;
//	s.count--;
//	delete p;
//	return x;
//}
//
//
//int main()
//{
//	Stack S;
//    int n;
//    cin>>n;
//	init(S);
//	for (int i = 0; i < n; i++)
//	{
//			 Push(S, i);
//	 }
//	while (!IsEmpty(S))
//	{
//		cout<<Pop(S);
//	}
//	cout<<S.top->info;
//	cout<<S.count;
//	return 0;
//	 
//}