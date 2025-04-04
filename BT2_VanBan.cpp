#include <stdio.h>
#define MAX 100
#define FO "Data.out"
void NhapMang1C(int a[], int &n)
{
    FILE *fi;
    fi = fopen(FI, "rt");
    if (fi == NULL)
    {
        printf("Khong the doc file");
        return;
    }
    fscanf(f, "%d", &n);
    fclose(fi);
}
void OutputData(int a[], int n)
{
    FILE *fo;
    fi = fopen(FI, "wt");
    if (fo == NULL)
    {
        printf("Khong the tao file");
        return;
    }
    fprintf(fo, "%d\n", n);
    for (int i=0; i<n; i++)
        fprintf(fo, "%d\n", a[i]);
    fclose(fo);
}
int main()
{
    int a[MAX];
    int n;
    NhapMang1C(a, n);
    OutputData(a, n);
    return 0;
}