//#include <iostream>
//using namespace std;
//
//void NhapMang(int a[], int& n)
//{
//	printf("Nhap gia so luong phan tu cua mang: ");
//	scanf("%d", &n);
//	for (int i = 0; i <= n - 1; i++)
//	{
//		printf("Nhap gia tri thu %d: ", i + 1);
//		scanf("%d", &a[i]);
//	}
//
//}
//void XuatMang(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//
//	}
//	printf("\n");
//}
//void Swap(int& x, int& y)
//{
//
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void Interchange(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if (a[i] > a[j])
//				Swap(a[i], a[j]);
//}
//int main()
//{
//	int a[100];
//	int n;
//	NhapMang(a, n);
//	XuatMang(a, n);
//	Interchange(a, n);
//	XuatMang(a, n);
//	return 0;
//}