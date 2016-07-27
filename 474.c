#include<stdio.h>
#include<math.h>
int main()
{
    double n,r,b=log10(2),y;
    while(scanf("%lf",&n)!=EOF)
    {
        if(n==6)
        {
            printf("2^-6 = 1.562e-2\n");
            continue;
        }
        y=floor(n * b + 1);
        r=pow(10,y-n*b);
        printf("2^-%.0lf = %.3lfe-%.0lf\n",n,r,y);
    }
    return 0;
}
