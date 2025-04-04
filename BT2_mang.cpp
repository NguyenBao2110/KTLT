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
        printf("%d ",*(a+i));
    }
    printf("\n");
}


void KT(int *a, int n)
{
    int d1=0;
    int d2=0;
    for(int i=0;i<=n-1;i++)
    {
        if((*(a+i)+i)%2==0)
           d1++;
           
        if(*(a+i)%2==0)
           d2++;
        
    }
    if(d1==n)
      printf("Mang co chan le\n");
    if(d1!=n)
      printf("Mang khong co tinh chan le\n");
    if(d2==n)
      printf("Mang co tinh toan chan\n");
    if(d2!=n)
      printf("Mang khong co tinh toan chan\n");
}

int main()
{

    int *a = NULL, k = 0, d1=0,kt=0;

    NhapMang(&a,&k);
    KT(a,k);
    delete [] a;
    
    system("PAUSE");
    return 0;
}