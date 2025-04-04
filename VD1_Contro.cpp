#include <iostream>
#include <stdlib.h>
int main()
{
    int n;
    int *p = NULL;
    n=20;
    p=&n;
    printf("n: Addr=%d, Val=%d\n",&n,n);
    printf("P: Addr=%f, Val=%f, ValRel=%f\n",&p, p, *p);
    int *pn=NULL;
    pn=(int*) malloc(sizeof(int));
    (*pn)=10;
    printf("sizeof(int): %d byte(s)\n", sizeof(int));
    printf("pn: Addr=%X, Val=%X, ValRef=%d\n", &pn, pn, *pn);
    free(pn);
    return 0;
}