#include <iostream>
using namespace std;

void NhapMang( int a[], int &n)
{
	printf("Nhap gia so luong phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0; i<=n-1; i++)
	{
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&a[i]);
	}

}
void XuatMang(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);

	}
	printf("\n");
}
void IMax(int a[], int n)
{ int max=0;
 for(int i=0; i<n;i++)
 {   //Tim gia tri lon nhat trong day
    if(a[i]>max)
    {
        max=a[i];
    }
 }
 printf("Vi tri cua cac phan tu lon nhat la: ");
 // Xuat tat ca vi tri ma gia tri bang gia tri lon nhat
 for(int i=0; i<n;i++)
 {
   if(a[i]==max)
   {
        printf("%d ",i);
   }
 }
 printf("\n");
}
// Tinh tong chu so
int TongChuSo( int n)
{
    int S=0;
    while(n!=0)
    {
        S+=(n%10);// Tach tung chu so roi cong lai
        n=n/10;
    }
    return S;
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
    for (int i = 0; i < n-1; i++)
    {
        // Tìm a[kmin] nhỏ nhất trong dãy [i, n-1]
        int minval = TongChuSo(a[i]);
        int kmin = i;
        for (int j = i+1; j < n; j++)
        if (minval > TongChuSo(a[j]))
        {
        minval = TongChuSo(a[j]);
        kmin = j;
        }
    // Hoán đổi a[i] với a[kmin]
    Swap(a[i], a[kmin]);
   }
}
int KTSNT(int n)
{
    int dem =0;
    for(int i=2; i<=n/2;i++)//Kiem tra n co phai la so nguyen to
    {
        if(n%i==0)
            dem++;
    }
    return dem;
}
void XoaSNT(int a[], int &n)
{
    for(int i=0;i<n;i++)
    {   
        if(KTSNT(a[i])==0&& a[i]!=1)
        {
            for(int j=i;j<n;j++)//Cho gia tri la SNT bang gia tri sau no roi don cac gia tri phia sau len
            {
                a[j]=a[j+1];
            }
            n--;// Giam kich thuoc cua day so
            i--;// tra ve lai vi tri co gia tri la SNNT da bi xoa de xet lai
        }
    }
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	XuatMang(a,n);
	IMax(a,n);
	Selection(a,n);
	XuatMang(a,n);
	XoaSNT(a,n);
	XuatMang(a,n);
	return 0;
}



