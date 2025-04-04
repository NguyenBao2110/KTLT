#include <iostream>
#include <stdlib.h>
int main()
{
    int a[5]={2,4,5,8};
    int na=3;
    int *p=NULL;
    p=a+1;
    printf("p: Addr=%d, Val=%d, Valref=%d", &p, p, *p);
    p=p+1;
    int x=p[-2];
    int *b=NULL;
    int nb=0;
    nb=3;
    b=(int*)malloc(sizeof(int)*nb);
    *(b+0)=10;
    *(b+1)=20;
    b[2]=30;
    if(b!=NULL) free(b);
    return 0;
}