#include <iostream>
using namespace std;

struct PhongThi
{
	int SP;
	char N;
	int KNC;
	
};
void NhapMang(PhongThi a[], int &n)
{
	printf("Nhap so luong phong thi : ");
	scanf("%d",&n);
	for(int i=0; i<=n-1; i++)
	{
		printf("Nhap thong tin phong thi thu %d: ",i);
	    scanf("%d%c%d",&a[i].SP,&a[i].N,&a[i].KNC);
		//Kiem tra cac thông tin cua phong hoc co dap ung yeu cau khong neu khong thi nhap lai
		if (a[i].SP < 1 || a[i].SP>200 || a[i].N < 'A' || a[i].N>'Z' || a[i].KNC < 10 || a[i].KNC>250)
		{
			printf("Nhap lai thong tin phong thi thu %d: ", i);
				i--;
		}
	}
}
void XuatMang(PhongThi a[],int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d%c%d;",a[i].SP,a[i].N,a[i].KNC);

	}
	printf("\n");
}
void Swap(PhongThi& x,PhongThi & y)
{
    // Hoán đổi x với y
    PhongThi temp = x;
    x = y;
    y = temp;
}
// Sắp xếp danh sách các phòng thi theo thứ tự giảm dần về Khả năng chứa.
void Selection(PhongThi a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        // Tìm a[kmin] nhỏ nhất trong dãy [i, n-1]
        int minval = a[i].KNC;
        int kmin = i;
        for (int j = i+1; j < n; j++)
        if (minval < a[j].KNC)
        {
        minval = a[j].KNC;
        kmin = j;
    }
    // Hoán đổi a[i] với a[kmin]
    Swap(a[i], a[kmin]);
   }
}
//Sắp xếp và in ra màn hình danh sách các phòng thi theo thứ tự tăng dần theo Nhà (Từ A→ Z), các phòng cùng một nhà thì sắp xếp theo thứ tự tăng dần theo Số phòng.
void Interchange1(PhongThi a[], int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			//Xap xep theo thu tu tang dan theo Nha ( Tu A->Z)
			if (a[i].N > a[j].N)
				Swap(a[i], a[j]);
	        //Sắp xếp theo thứ tự tăng dần theo Số phòng khi trùng nhà
			else if(a[i].N == a[j].N)
			{
			    if(a[i].SP>a[j].SP)
			        Swap(a[i], a[j]);
			}
			
}
//Sắp xếp và in ra màn hình danh sách các phòng thi theo thứ tự tăng dần theo Nhà (Từ A→ Z), các phòng cùng một nhà thì sắp xếp theo thứ tự giảm dần theo Khả năng chứa.
void Interchange2(PhongThi a[], int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			//Xap xep theo thu tu tang dan theo Nha ( Tu A->Z)
			if (a[i].N > a[j].N)
				Swap(a[i], a[j]);
	        //các phòng cùng một nhà thì sắp xếp theo thứ tự giảm dần theo Khả năng chứa
			else if(a[i].N == a[j].N)
			{
			    if(a[i].KNC<a[j].KNC)
			        Swap(a[i], a[j]);
			}
			
}


int main()
{
    PhongThi a[100];
    int n;
    NhapMang(a,n);
    XuatMang(a,n);
    Selection(a,n);
    XuatMang(a,n);
    Interchange1(a,n);
    XuatMang(a,n);
    Interchange2(a,n);
    XuatMang(a,n);
    return 0;
}
