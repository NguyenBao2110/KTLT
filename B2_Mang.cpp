#include <iostream>
#include <stdlib.h>
#include <math.h>
void KTSCP( int *a)
{
    if(pow(sqrt((*a)),2)==(*a))
       printf("So %d la so chinh phuong", *a);
    else
       printf("So %d khong phai la so chinh phuong", *a);
}
int main()
{
    int x;
    printf("Nhap so a: ");
    scanf("%d",&x);
    KTSCP(&x);
    system("PAUSE");
    return 0;
}