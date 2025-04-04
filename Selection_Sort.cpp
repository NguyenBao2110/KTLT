#include <iostream>
using namespace std;

void NhapMang(int a[], int& n)
{
    printf("Nhap gia so luong phan tu cua mang: ");
    cin>>n;
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Nhap gia tri thu %d: ", i + 1);
        cin>>a[i];
    }

}
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);

    }
    printf("\n");
}
void Swap(int& x, int& y)
{
    // Hoán đổi x với y
    int temp = x;
    x = y;
    y = temp;
}
void Selection(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Tìm a[kmin] nhỏ nhất trong dãy [i, n-1]
        int minval = a[i];
        int kmin = i;
        for (int j = i + 1; j < n; j++)
            if (minval > a[j])
            {
                minval = a[j];
                kmin = j;
            }
        // Hoán đổi a[i] với a[kmin]
        Swap(a[i], a[kmin]);
    }
}
int main()
{
    int a[100];
    int n;
    NhapMang(a, n);
    XuatMang(a, n);
    Selection(a, n);
    XuatMang(a, n);
    return 0;
}