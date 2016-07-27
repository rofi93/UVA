#include<stdio.h>
#include<math.h>
int main()
{
    double n,r,b=log10(2),y,t;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf",&n);
        y=floor(n * b + 1);
        r=pow(10,y-n*b);
        printf("2^-%.0lf = %.3lfE-%.0lf\n",n,r,y);
    }
    return 0;
}

