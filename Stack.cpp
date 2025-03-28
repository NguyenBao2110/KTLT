//#include <iostream>
//using namespace std;
//
//typedef struct
//{
//	int top;
//	int count;
//	int size;
//	int* Arr;
//}Stack;
//void Init(Stack &s, int size)
//{
//	s.top = -1;
//	s.count = 0;
//	s.size = size;
//	s.Arr = new int[s.size];
//}
//void Delete(Stack& s)
//{
//	s.top = -1;
//	s.count = 0;
//	s.size = 0;
//	delete[] s.Arr;
//}
// bool IsEmpty(Stack& s)
//{
//	 return s.top == -1;
//}
// bool IsFull(Stack& s)
// {
//	 return s.top == s.size - 1;
// }
// void Push(Stack& s, int x)
// {
//	 s.top++;
//	 s.Arr[s.top] = x;
//	 s.count++;
// }
// int Pop(Stack& s)
// {
//	 int x = s.Arr[s.top];
//	 s.top--;
//	 s.count--;
//	 return x;
// }
//
// int main()
// {
//	 Stack S;
//	 int n;
//	 cin>>n;
//	 Init(S, n);
//	 for (int i = 0; i < n; i++)
//	 {
//		 Push(S, i);
//	 }
//	 printf("%d\n", S.top);
//	 printf("%d\n", S.size);
//	 printf("%d\n", S.count);
//	 return 0;
// }
