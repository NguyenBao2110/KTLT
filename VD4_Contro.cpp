#include <iostream>
#include <stdlib.h>
#define MAX 100
void NhapMang(int *&a,int &n)
{
    printf("Moi ban nhap so phan tu: ");
    scanf("%d",n);
    a=new int[n];
    for(int i=0; i<n-1; i++)
    {
        printf("Nhap phan tu thu %d: ", i );
        scanf("%d", (*a)+i);
    }
}
void NhapMang(int **a,int *n) 
{
printf("Moi ban nhap so luong phan tu: ");
scanf("%d",n);
(*a) = new int[(*n)];
for(int i=0; i<=(*n)-1; i++)
{

printf("Phan tu %d: ",i);
scanf("%d",(*a)+i);
}
}
void XuatMang(int *a, int n  )
{
    printf("Day so có %d phan tu: ", n);
    for(int i=0; i<=n-1; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
}
void DoiChan(int *a, int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(*(a+i)%2==0)
           *(a+i)=0;
    }
}
int main()
{
    int *b = NULL, k = 0;
    NhapMang(&b,&k);
    XuatMang(b,k);
    DoiChan(b,k);
    printf("Doi cac gia tri chan thanh so 0:\n");
    XuatMang(b,k);
    if(b!=NULL) delete []b;
    system("PAUSE");
    
    return 0;
}
