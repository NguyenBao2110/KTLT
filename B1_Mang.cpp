#include <iostream>
#include <stdlib.h>
void HoanVi(int *a, int*b)
{
    int tmp=(*a);
    (*a)=(*b);
    (*b)=tmp;
}
int main()
{
    int x,y;
    printf("Nhap so a: ");
    scanf(" %d", &x);
    printf("Nhap so b: ");
    scanf("%d", &y);
    printf( "Truoc khi hoan vi: a = %d va b = %d\n", x, y);
    HoanVi(&x,&y);
    printf("Sau khi hoan vi: a= %d va b = %d\n", x, y);
    system("PAUSE");
    return 0;
}