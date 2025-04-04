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

int DemChan(int *a, int n)
{
    int dem = 0;
    for(int i=0;i<=n-1;i++)
    {
        if(*(a+i)%2==0) dem++;
    }
    return dem;
}
int DemLe(int *a, int n)
{
    int dem = 0;
    for(int i=0;i<=n-1;i++)
    {
        if(*(a+i)%2!=0) dem++;
    }
    return dem;
}
void TachChanLe(int *a,int k, int **b, int *n, int **c, int *m)
{
    (*n) = DemChan(a, k);
    (*b) = new int[(*n)];
    (*m) = DemLe(a,k);
    (*c) = new int[(*m)];
    int cs1 = 0;
    int cs2 = 0;
    for(int i=0;i<=k-1;i++)
    {   
        if(*(a+i)%2==0)
        {
           *((*b)+cs1) = *(a+i); 
            cs1++;
        }
        else
        {
            *((*c)+cs2) = *(a+i);
            cs2++;
        }
    }
}
int main()
{

    int *a = NULL, k = 0;
    int *b = NULL, n;
    int *c = NULL, m;

    NhapMang(&a,&k);

    TachChanLe(a,k,&b,&n,&c,&m);

    printf("+ Day b chua cac so chan\n");
    XuatMang(b,n);
    printf("+ Day c chua cac so le\n");
    
    XuatMang(c,m);

    delete [] a;
    delete [] b;
    delete [] c;

    system("PAUSE");
    return 0;
}