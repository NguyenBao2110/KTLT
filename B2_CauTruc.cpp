#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
typedef struct SachTag
{
     char maSach[11];
     char tenSach[21];
     int gia;
} Sach;
void Nhap1QuyenSach(Sach &s)
{
     printf("Ma sach: "); gets(s.maSach);
     printf("Ten sach: "); gets(s.tenSach);
     printf("Gia: "); scanf("%d", &s.gia);
     flushall();
}
void Xuat1QuyenSach(Sach s)
{
     printf("Ma sach: %s \n", s.maSach);
     printf("Ten sach: %s \n",s.tenSach);
     printf("Gia: %d \n", s.gia);
}
void NhapMangSach(Sach a[], int &n)
{
     scanf("%d", &n);
     int i;
     for (i=0; i<n; i++)
{
     printf("Nhap quyen sach thu %d: \n", i);
     Nhap1QuyenSach(a[i]);
}
}
int TimSachTheoMa(Sach a[], int n, char ma[], Sach &kq)
{
     int timThay = 0;
     int i=0;
     while (i<n && timThay==0)
     {
          if (strcmp(ma, a[i].maSach) == 0)
          {
               kq = a[i];


               timThay = 1;
          }
          i++;
     }
     return timThay;
}
int main(void)
{
     Sach a[MAX];
     int n;
     NhapMangSach(a, n);
     char ma[11];
     printf("Nhap ma sach muon tim: ");
     gets(ma);
     Sach kq;
     int timThay;
     timThay = TimSachTheoMa(a, n, ma, kq);
     if (timThay == 1)
     {
          printf("Quyen sach tim duoc la: \n");
          Xuat1QuyenSach(kq);
     }
     else
          printf("Khong tim thay quyen sach co ma da cho");
     return 0;
}