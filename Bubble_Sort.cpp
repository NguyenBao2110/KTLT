//#include <iostream>
//using namespace std;
//
//void NhapMang(int a[], int& n)
//{
//    printf("Nhap gia so luong phan tu cua mang: ");
//    scanf("%d", &n);
//    for (int i = 0; i <= n - 1; i++)
//    {
//        printf("Nhap gia tri thu %d: ", i + 1);
//        scanf("%d", &a[i]);
//    }
//
//}
//void XuatMang(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d", a[i]);
//
//    }
//    printf("\n");
//}
//void Swap(int& x, int& y)
//{
//    // Hoán đổi x với y
//    int temp = x;
//    x = y;
//    y = temp;
//}
//void BubbleNoFlag(int a[], int n)
//// Bubble Sort không cờ
//{
//    for (int i = n - 1; i >= 1; i--)
//        for (int j = 0; j <= i - 1; j++)
//            if (a[j] > a[j + 1])
//                Swap(a[j], a[j + 1]);
//}
//int main()
//{
//    int a[100];
//    int n;
//    NhapMang(a, n);
//    XuatMang(a, n);
//    BubbleNoFlag(a, n);
//    XuatMang(a, n);
//    return 0;
//}