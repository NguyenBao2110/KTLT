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
//void Insertion(int a[], int n)
//{
//    for (int i = 1; i < n; i++)
//    {
//        int j = i - 1;
//        int x = a[i];
//        bool cont = true;
//        while ((j >= 0) && cont)
//            if (a[j] > x)
//            {
//                a[j + 1] = a[j];
//                j--;
//            }
//            else
//                cont = false;
//        a[j + 1] = x;
//    }
//}
//int main()
//{
//    int a[100];
//    int n;
//    NhapMang(a, n);
//    XuatMang(a, n);
//    Insertion(a, n);
//    XuatMang(a, n);
//    return 0;
//}