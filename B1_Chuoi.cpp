#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000 
int CoKyTuSo(char *s)
{
    int co;
    int len;
    len = strlen(s); 
    co = 0; 
    for(int i=0;i<=len-1;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            co = 1;
            break; 
        }
    }
    return co;
}
int main()
{

    char sChuoi[MAX+1] = {0}; 
    int kq;

    printf("Moi ban nhap chuoi s: ");
    fflush(stdin); 
    gets(sChuoi);

    kq = CoKyTuSo(sChuoi);

    printf("Chuoi \"%s\" co chua ky tu so.", sChuoi);

    system("PAUSE");

    return 0;
}