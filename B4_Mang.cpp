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

void KTTDD(int *a, int n, int *dem)
{
    int x=1;
    for(int i=0;i<=n-1;i++)
    {
        if(*(a+i)*x>=0) 
        {
            dem++;
        }
        else 
           dem--;
        x=-1*x;
        
    }
}
void KTDD(int *a, int n)
{
    int d1=0;
    int d2=0;
    for(int i=0;i<=n-1;i++)
    {
        if(*(a+i)<=*(a+i+1))
           d1++;
           
        if(*(a+i)>=*(a+i+1))
           d2++;
        
    }
    if(d2==n-1||d1==n-1)
      printf("Mang co tinh don dieu\n");
    else
      printf("Mang khong co tinh don dieu\n");
}
int KTDX(int *a, int n)
{
    int kt=1;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)!=*(a+n-i-1))
        {
            kt=0;
            break;
        }
    }
    return kt;
}
int main()
{

    int *a = NULL, k = 0, d1=0,kt=0;

    NhapMang(&a,&k);
    KTTDD(a,k,&d1);
    if(d1==-k||d1==k)
    {
        printf("Mang co tinh dan dau\n");
    }
    else
    {
        printf("Mang khong co tinh dan dau\n");
    }
    KTDD(a,k);
    kt=KTDX(a,k);
    if(kt==1)
       printf("Mang co tinh doi xung\n");
    else
       printf("Mang khong co tinh doi xung\n");

    delete [] a;
    
    system("PAUSE");
    return 0;
}