//#include <iostream>
//using namespace std;
//
//void NhapMang(int a[], int& n)
//{
//	cout<<"Nhap so luong phan tu cua mang: ";
//	cin>>n;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cout << "Nhap gia tri thu " << i + 1 << ": ";
//		cin>>a[i];
//	}
//
//}
//void XuatMang(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout<<a[i];
//
//	}
//	cout<<"\n";
//}
//void Swap(int& x, int& y)
//{
//    // Hoán đổi x với y
//    int temp = x;
//    x = y;
//    y = temp;
//}
//void heapify(int A[], int n, int i)
//{
//	int l = 2 * i + 1;
//	int r = 2 * i + 2;
//	int largest = i;
//	if (l<n && A[l]>A[i])
//	{
//		largest = l;
//	}
//	if (r<n && A[r]>A[largest])
//	{
//		largest = r;
//	}
//	if (largest != i)
//	{
//		Swap(A[i], A[largest]);
//		heapify(A, n, largest);
//	}
//}
//void HeapSort(int A[], int n)
//{
//	for (int i = n / 2 - 1; i >= 0; i--)
//	{
//		heapify(A, n, i);
//	}
//	for (int j = n - 1; j >= 0; j--)
//	{
//		Swap(A[j], A[0]);
//		heapify(A, j, 0);
//	}
//}
//int main()
//{
//	int A[100]; int n;
//	NhapMang(A, n);
//	XuatMang(A, n);
//	HeapSort(A, n);
//	XuatMang(A, n);
//	return 0;
//}