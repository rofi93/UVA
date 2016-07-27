#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,w,area,s,max;
    while(scanf("%lf %lf %lf",&u,&v,&w)!=EOF)
    {
        max=0;
        if(u>max)
            max=u;
        if(v>max)
            max=v;
        if(w>max)
            max=w;
        if(u==0 || v==0 || w==0)
        {
            printf("-1.000\n");
        }
        else if(u+v+w-max<=max)
        {
            printf("-1.000\n");
        }
        else
        {
            s=(u+v+w)/2;
            area=(4*sqrt(s*(s-u)*(s-v)*(s-w)))/3;
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
