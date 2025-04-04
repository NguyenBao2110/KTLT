#include <stdio.h>
struct HocSinh
{
    char MaSo[11], Ho[11], Ten[51];
    int Phai, NamSinh;
};
#define MAX 50
struct LopHoc
{
    HocSinh aHocSinh[MAX];
    int SoLuong;
};
void NhapLopHoc(LopHoc &lop)
{
    printf("Nhap so luong hoc sinh: ");
    scanf("%d",&lop.SoLuong);
    while(lop.SoLuong<=0 || lop.SoLuong>MAX)
    {
        printf("Nhap sai! Nhap lai: ");
        scanf("%d",&lop.SoLuong);
    }
    for(int i=0; i<=lop.SoLuong-1; i++)
    {
        printf("Nhap thong tin hoc sinh %d: \n",i);
        printf("+ Ma so: ");
        flushall(); gets(lop.aHocSinh[i].MaSo);
        printf("+ Ho lot: ");
        flushall(); gets(lop.aHocSinh[i].Ho);
        printf("+ Ten: ");
        flushall(); gets(lop.aHocSinh[i].Ten);
        printf("+ Phai: ");
        scanf("%d",&lop.aHocSinh[i].Phai);
        while(lop.aHocSinh[i].Phai!=0 && lop.aHocSinh[i].Phai!=1)
        {
            printf("+ Nhap sai! Nhap lai: ");
            scanf("%d",&lop.aHocSinh[i].Phai);
        }
        printf("+ Nam sinh: ");
        scanf("%d",&lop.aHocSinh[i].NamSinh);
        while(lop.aHocSinh[i].NamSinh<=0)
        {
            printf("+ Nhap sai! Nhap lai: ");
            scanf("%d",&lop.aHocSinh[i].NamSinh);
        }
    }
}
void XuatLopHoc(LopHoc &lop)
{
    printf("Lop hoc co %d hoc sinh: \n",lop.SoLuong);
    printf("STT\tMa so\tHo ten\t\tPhai\tNam sinh \n");
    for(int i=0; i<=lop.SoLuong-1; i++)
    {
        printf("%d\t%s\t%s %s\t",i+1, lop.aHocSinh[i].MaSo,
lop.aHocSinh[i].Ho, lop.aHocSinh[i].Ten);
        if(lop.aHocSinh[i].Phai==1)
            printf("Nam\t");
        else
            printf("Nu\t");
        printf("%d",lop.aHocSinh[i].NamSinh);
        printf("\n");
    }
}
void DemSiSo(LopHoc lop, int &sonam, int &sonu)
{
    sonam = sonu = 0;
    for(int i=0; i<=lop.SoLuong-1; i++)
    {
        if(lop.aHocSinh[i].Phai == 1)
            sonam++;
        else
            sonu++;

    }
}
void SapXepTangTheoNamSinh(LopHoc &lop)
{
    for(int i=0; i<=lop.SoLuong-2; i++)
        for(int j=i+1; j<=lop.SoLuong-1; j++)
        {
            if(lop.aHocSinh[i].NamSinh>lop.aHocSinh[j].NamSinh)
            {
                HocSinh tmp = lop.aHocSinh[i];
                lop.aHocSinh[i] = lop.aHocSinh[j];
                lop.aHocSinh[j] = tmp;
            }
        }
}
int main()
{
    LopHoc lop =
    {
        {
            {"01","Nguyen Van","A",1,1984},
            {"02","Tran Thi","B",0,1982},
            {"03","Le Duy","C",1,1982}
        },
        3
    };
    LopHoc lop;
    int sonam, sonu;
    XuatLopHoc(lop);
    DemSiSo(lop, sonam, sonu);
    printf("+ Dem si so hoc sinh trong lop hoc: \n");
    printf("Lop co %d hoc sinh, trong do %d nam va %d nu.\n",lop.SoLuong,sonam,
    sonu);
    printf("+ Danh sach hoc sinh trong lop hoc tang dan theo nam sinh:\n");
    SapXepTangTheoNamSinh(lop);
    XuatLopHoc(lop);
    return 0;
}