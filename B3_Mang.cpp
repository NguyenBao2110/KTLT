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
void TachChan(int *a,int n, int **b, int *m)
{
    (*m) = DemChan(a, n);
    (*b) = new int[(*m)];
    int cs = 0;
    for(int i=0;i<=n-1;i++)
    {   
        if(*(a+i)%2==0)
        {
           *((*b)+cs) = *(a+i); 
            cs++;
        }
    }
}
int main()
{

    int *b = NULL, k = 0;
    int *aChan = NULL, nChan;

    NhapMang(&b,&k);

    TachChan(b,k,&aChan,&nChan);

    printf("+ Day chua cac so chan\n");
    XuatMang(aChan,nChan);

    delete [] b;
    delete []aChan;

    system("PAUSE");
    return 0;
}