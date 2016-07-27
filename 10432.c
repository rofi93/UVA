#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double n,r,poly_area;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
        poly_area=(n/2)*r*r*sin(2*pi/n);
        printf("%.3lf\n",poly_area);
    }
    return 0;
}
