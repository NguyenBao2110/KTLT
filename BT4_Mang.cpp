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

void GopDay(int *a,int k, int *b, int n, int **c, int *m)
{
    (*m) =0;
    int j=0,h=0;
    (*c) = new int[(*m)];
    for(int i=1;i>0;i++)
    {   if(j==k)
        {
            *((*c)+(*m)) = *(b+h);
            h++;
            (*m)++;
        }
        else if (h==n)
        {
            *((*c)+(*m)) = *(a+j); 
            j++;
            (*m)++;
        }
        else if(*(a+j)<=*(b+h))
        {
           *((*c)+(*m)) = *(a+j); 
            j++;
            (*m)++;
        }
        else
        {
            *((*c)+(*m)) = *(b+h);
            h++;
            (*m)++;
        }
        if((*m)==(n+k))
             break;
    }
}
int main()
{

    int *a = NULL, k = 0;
    int *b = NULL, n = 0;
    int *c = NULL, m;

    NhapMang(&a,&k);
    NhapMang(&b,&n);

    GopDay(a,k,b,n,&c,&m);

    printf("+ Day b chua cac so chan\n");
    XuatMang(c,m);
    printf("+ Day c chua cac so le\n");
    
    XuatMang(c,m);

    delete [] a;
    delete [] b;
    delete [] c;

    system("PAUSE");
    return 0;
}