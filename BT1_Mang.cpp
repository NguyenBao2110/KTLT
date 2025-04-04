#include <iostream>
#include <math.h>
#include <stdlib.h>
int GPTB2(float *a, float *b, float *c,float *x1, float *x2)
{
    int sn = -1;
    if((*a)==0) 
    {
        if((*b)==0) 
        {
            if((*c)==0)
                sn = -1;
            else
                sn = 0;
        }
        else 
        { 
            sn = 1;
            (*x1) = -(*c) / (*b);
        }
    } else 
    {
        float d = pow((*b),2) - 4 * (*a) * (*c);
        if(d<0) sn = 0;
        else if(d == 0) 
        {
            sn = 1;
            (*x1) = -(*b) / (2 * (*a));
        } else 
        {
            sn = 2;
           (*x1) = (-(*b) - sqrt(d))/(2*(*a));
            (*x2) = -(*b)/(*a)-(*x1);
            if((*x1)>(*x2))
            {
                float tam = (*x1);
                (*x1) = (*x2);
                (*x2) = tam;
            }
        }
    }
    return sn;
}
 int main(){
    float a, b, c, x1, x2;
    int sn;
    printf("Nhap ba he so a, b, c:\n ");
    scanf("%f %f %f",&a,&b,&c);
    sn = GPTB2(&a, &b, &c, &x1, &x2);
    if(sn == -1)
        printf("Phuong trinh co vo so nghiem\n");
    else if(sn == 0)
        printf("Phuong trinh vo nghiem\n");
    else
    {
        printf("Phuong trinh co %d nghiem\n", sn);
        printf("x1 = %f ", x1);
        if(sn==2)
            printf("x2 = %f ", x2);
    }
    return 0;
}
