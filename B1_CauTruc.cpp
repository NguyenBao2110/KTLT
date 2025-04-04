#include <stdio.h>
#include <math.h>
/* Khai bao cao truc PhanSo */
typedef struct tagPhanSo
{
    int tuSo;
    int mauSo;
} PhanSo;

void NhapPhanSo(const char *info, PhanSo &ps);

void XuatPhanSo(PhanSo ps);

void RutGonPhanSo(PhanSo &ps);

int SoSanhPhanSo(PhanSo p1, PhanSo p2);

void CongPhanSo(PhanSo p1,PhanSo p2, PhanSo &pret)
{
    pret.tuSo = p1.tuSo*p2.mauSo + p1.mauSo*p2.tuSo;
    pret.mauSo = p1.mauSo*p2.mauSo;
    RutGonPhanSo(pret);
}
int main()
{
    PhanSo p1, p2;
    NhapPhanSo("Moi ban nhap phan so 1: ",p1);
    NhapPhanSo("Moi ban nhap phan so 2: ",p2);
    RutGonPhanSo(p1); RutGonPhanSo(p2);
    printf("+ Rut gon: ");
    XuatPhanSo(p1); printf(" ");
    XuatPhanSo(p2);printf("\n");
    char aDau[3] = {'<','=','>'}; 
    int ret = SoSanhPhanSo(p1,p2);
    printf("+ So sanh: ");
    XuatPhanSo(p1); printf("%c",aDau[ret+1]);
    XuatPhanSo(p2); printf("\n");
    PhanSo pret;
    CongPhanSo(p1,p2,pret);
    printf("+ Cong: ");
    XuatPhanSo(p1); printf("+");
    XuatPhanSo(p2); printf("=");
    XuatPhanSo(pret); printf("\n");
    return 0;
}
void NhapPhanSo(const char *info, PhanSo &ps)
{
    printf("%s",info);
    scanf("%d%d",&ps.tuSo,&ps.mauSo);
}
void XuatPhanSo(PhanSo ps)
{
    printf("[%d/%d]",ps.tuSo,ps.mauSo);
}
void RutGonPhanSo(PhanSo &ps)
{
    int ucln, a, b, tmp;
    a = ps.tuSo;
    b = ps.mauSo;
    while(b!=0)
    {
        tmp = a;
        a = b;
        b = tmp % a;
    }
    ucln = a;
    ps.tuSo = ps.tuSo / ucln;
    ps.mauSo = ps.mauSo / ucln;
}
int SoSanhPhanSo(PhanSo p1, PhanSo p2)
{
    int ret;
    p1.tuSo = p1.tuSo * p1.mauSo / abs(p1.mauSo);
    p1.mauSo = abs(p1.mauSo);
    p2.tuSo = p2.tuSo * p2.mauSo / abs(p2.mauSo);
    p2.mauSo = abs(p2.mauSo);
    int vp1 = p1.tuSo * p2.mauSo;
    int vp2 = p2.tuSo * p1.mauSo;
    if(vp1>vp2)
        ret = 1;
    else if(vp1==vp2)
        ret = 0;
    else
        ret = -1;
    return ret;
}