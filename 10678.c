#include<stdio.h>
#include<math.h>
#define pi 2*acos(0)
int main()
{
    int i,t;
    double l,d,a,b,area;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf %lf",&d,&l);
        a=l/2;
        b=sqrt((l*l/4)-(d*d/4));
        area=pi*a*b;
        printf("%.3lf\n",area);
    }
    return 0;
}
