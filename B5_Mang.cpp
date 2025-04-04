#include <stdio.h>
#include <stdlib.h>
#define MAX 100 
void NhapMang(int **a,int *n)
{
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d",n);
    while((*n)<=0 || (*n)>MAX)
    { 
        printf("Nhap sai! Nhap lai: ");
        scanf("%d",n);
    }
    (*a) = new int[(*n)];
    for(int i=0; i<=(*n)-1; i++)
    { 
        printf("Phan tu %d: ",i);
        scanf("%d",(*a)+i);
    }
}

void XuatMang(int *a,int n)
{
    printf("Day so co %d phan tu: ",n);
    for(int i=0; i<=n-1; i++)
    {
        printf("%d ",*(a+i));// xuat a[i] hay printf("%d",a[i]);
    }
    printf("\n");
}
int KTSNT(int *n)
{
    int d=0;
    for(int i=2; i<=(*n)/2; i++)
    {
        if((*n)%i==0)
        {
            d++;
        }
    }
    if(d==0)
      return 1;
    return 0;
}
int DemSNT(int *a, int n)
{
    int dem = 0;
    for(int i=0;i<=n-1;i++)
    {
        if(KTSNT((a+i))==1) dem++;
    }
    return dem;
}
void TachSNT(int *a,int n, int **b, int *m)
{
    (*m) = DemSNT(a, n);
    (*b) = new int[(*m)];
    int cs = 0;
    for(int i=0;i<=n-1;i++)
    {   
        if(KTSNT((a+i))==1)
        {
           *((*b)+cs) = *(a+i); 
            cs++;
        }
    }
}
int main()
{

    int *b = NULL, k = 0;
    int *a = NULL, n;

    NhapMang(&b,&k);

    TachSNT(b,k,&a,&n);

    printf("+ Day chua cac so nguyen to\n");
    XuatMang(a,n);

    delete [] b;
    delete []a;

    system("PAUSE");
    return 0;
}