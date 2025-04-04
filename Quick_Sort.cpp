#include <iostream>
using namespace std;

void NhapMang(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap gia tri thu " << i + 1 << ": ";
		cin >> a[i];
	}

}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];

	}
	cout << "\n";
}
void Swap(int& x, int& y)
{
	// Hoán đổi x với y
	int temp = x;
	x = y;
	y = temp;
}

void Sort(int A[], int p, int q)
{
	int x = A[(p + q) / 2];
	int i = p;
	int j = q;
	do
	{
		while (A[i] < x) i++;
		while (A[j] > x) j--;
		if (i <= j)
		{
			Swap(A[i], A[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (p < j)
	{
		Sort(A, p, j);
	}
	if (i < q)
	{
		Sort(A, i, q);
	}
}
void QuickSort(int A[], int n)
{
	Sort(A, 0, n-1);
}
int main()
{
    int a[100];
    int n;
    NhapMang(a, n);
    XuatMang(a, n);
    QuickSort(a, n);
    XuatMang(a, n);
    return 0;
}