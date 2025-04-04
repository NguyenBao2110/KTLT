#include <iostream>
using namespace std;

struct ThuBac
{
	float HS;
	int B;
};
void NhapMang(ThuBac a[], int &n)
{
	printf("Nhap gia so luong phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0; i<=n-1; i++)
	{
		printf("Nhap so hang thu %d: ",i);
	    scanf("%f%d",&a[i].HS,&a[i].B);
	}
}
void XuatMang(ThuBac a[],int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%f^%d ",a[i].HS,a[i].B);

	}
	printf("\n");
}
void Swap(ThuBac& x, ThuBac& y)
{
    // Hoán đổi x với y
    ThuBac temp = x;
    x = y;
    y = temp;
}
void Selection(ThuBac a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        // Tìm a[kmin] nhỏ nhất trong dãy [i, n-1]
        int minval = a[i].B;
        int kmin = i;
        for (int j = i+1; j < n; j++)
        if (minval > a[j].B )
        {
        minval = a[j].B;
        kmin = j;
        }
    // Hoán đổi a[i] với a[kmin]
    Swap(a[i], a[kmin]);
   }
}



int main()
{
    ThuBac a[100];
    int n;
    NhapMang(a,n);
    XuatMang(a,n);
    Selection(a,n);
    XuatMang(a,n);
    return 0;
}
