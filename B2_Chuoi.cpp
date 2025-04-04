#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000 
int KTDX(char *s)
{
    int l;
    l = strlen(s); 
    for(int i=0;i<=l-1;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            return 0;
            break; 
        }
    }
    return 1;
}
int main()
{

    char sChuoi[MAX+1] = {0}; 
    int kq;

    printf("Moi ban nhap chuoi s: ");
    fflush(stdin); 
    gets(sChuoi);

    kq = KTDX(sChuoi);
    if(kq==1)
    {
       printf("Chuoi \"%s\" la chuoi doi xung.", sChuoi);
    } 
    else
       printf("Chuoi \"%s\" khong phai la chuoi doi xung.", sChuoi);
    system("PAUSE");

    return 0;
}